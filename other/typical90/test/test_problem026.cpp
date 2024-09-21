#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(int n, vector<int> a, vector<int> b) {
	string input = to_string(n) + "\n";
	for (int i = 0; i < n - 1; i++) {
		input += to_string(a[i]) + " " + to_string(b[i]) + "\n";
	}
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	vector<set<int>> edges(n + 1);
	for (int i = 0; i < n - 1; i++) {
		edges[a[i]].insert(b[i]);
		edges[b[i]].insert(a[i]);
	}
	vector<int> c(n >> 1);
	for (int i = 0; i < (n >> 1); i++) {
		output_ss >> c[i];
		EXPECT_TRUE((c[i] >= 1) && (c[i] <= n));
		if (!((c[i] >= 1) && (c[i] <= n))) {
			cout << "Invalid input " << c[i] << endl;
		}
		for (int j = 0; j < i; j++) {
			EXPECT_EQ(edges[c[j]].end(), edges[c[j]].find(c[i]));
			if (edges[c[j]].end() != edges[c[j]].find(c[i])) {
				cout << c[j] << " connect with " << c[i] << endl;
			}
		}
	}
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int n;
	input_ss >> n;
	vector<int> a(n - 1), b(n - 1);
	for (int i = 0; i < n - 1; i++) {
		input_ss >> a[i] >> b[i];
	}
}

static_block {
	COMMAND = "problem026";
	EXTERNAL = "typical90/026";
	FUNC = &my_check;
}

TEST(typical90_problem026, case1) {
	check(4, vector<int>{1, 2, 2}, vector<int>{2, 3, 4});
}

TEST(typical90_problem026, case2) {
	check(6, vector<int>{1, 2, 3, 2, 3}, vector<int>{3, 4, 5, 5, 6});
}
