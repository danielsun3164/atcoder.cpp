#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void check(int n, int m, vector<int> &u, vector<int> &v, string s) {
	string input = to_string(n) + " " + to_string(m) + "\n";
	vector<vector<int>> edges(n + 1);
	for (int i = 0; i < m; i++) {
		input += to_string(u[i]) + " " + to_string(v[i]) + "\n";
		edges[u[i]].emplace_back(v[i]);
		edges[v[i]].emplace_back(u[i]);
	}
	input += s + "\n";
	Command cmd = execute(input);
	int lineNo = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			lineNo++;
		}
	}
	EXPECT_EQ(2, lineNo);
	istringstream output_ss(cmd.StdOut);
	int k;
	output_ss >> k;
	EXPECT_TRUE(k <= 4 * n);
	vector<int> a(k), count(n + 1, 0);
	for (int i = 0; i < k; i++) {
		output_ss >> a[i];
		EXPECT_TRUE((a[i] >= 1) && (a[i] <= n));
		count[a[i]]++;
		if (i > 0) {
			EXPECT_NE(edges[a[i - 1]].end(),
					  find(edges[a[i - 1]].begin(), edges[a[i - 1]].end(), a[i]));
		}
	}
	for (int i = 0; i < n; i++) {
		EXPECT_EQ(s[i] - '0', count[i + 1] & 1);
	}
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int n, m;
	input_ss >> n >> m;
	vector<int> u(m), v(m);
	for (int i = 0; i < m; i++) {
		input_ss >> u[i] >> v[i];
	}
	string s;
	input_ss >> s;
	check(n, m, u, v, s);
}

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc244/G";
	FUNC = &my_check;
}

TEST(abc244_problemG, case1) {
	vector<int> u{6, 2, 4, 1, 6, 3}, v{3, 5, 2, 3, 5, 2};
	check(6, 6, u, v, "110001");
}

TEST(abc244_problemG, case2) {
	vector<int> u{3, 3, 1}, v{1, 2, 2};
	check(3, 3, u, v, "000");
}
