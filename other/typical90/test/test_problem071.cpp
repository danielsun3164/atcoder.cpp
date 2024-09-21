#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(int n, int m, int k, vector<int> a, vector<int> b) {
	string input = to_string(n) + " " + to_string(m) + " " + to_string(k) + "\n";
	for (int i = 0; i < m; i++) {
		input += to_string(a[i]) + " " + to_string(b[i]) + "\n";
	}
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	while (k--) {
		vector<int> p(n), idx(n + 1);
		set<int> st;
		for (int i = 0; i < n; i++) {
			output_ss >> p[i];
			EXPECT_TRUE((p[i] >= 1) && (p[i] <= n));
			EXPECT_EQ(st.end(), st.find(p[i]));
			st.insert(p[i]);
			if (!((p[i] >= 1) && (p[i] <= n))) {
				cout << "Invalid input " << p[i] << endl;
			}
			idx[p[i]] = i;
		}
		for (int i = 0; i < m; i++) {
			EXPECT_TRUE(idx[a[i]] < idx[b[i]]);
		}
	}
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result;
	expected_ss >> result;
	if (-1 == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n, m, k;
		input_ss >> n >> m >> k;
		vector<int> a(m), b(m);
		for (int i = 0; i < m; i++) {
			input_ss >> a[i] >> b[i];
		}
		check(n, m, k, a, b);
	}
}

static_block {
	COMMAND = "problem071";
	EXTERNAL = "typical90/071";
	FUNC = &my_check;
}

TEST(typical90_problem071, case1) {
	check(5, 2, 3, vector<int>{1, 3}, vector<int>{2, 4});
}

TEST(typical90_problem071, case2) {
	check(string("") + "5 2 1\n" + "1 3\n" + "3 1", string("") + "-1");
}

TEST(typical90_problem071, case3) {
	check(10, 15, 10, vector<int>{8, 9, 10, 6, 10, 1, 7, 6, 8, 5, 10, 3, 8, 3, 2},
		  vector<int>{4, 4, 2, 2, 6, 3, 4, 8, 1, 6, 9, 7, 3, 9, 3});
}
