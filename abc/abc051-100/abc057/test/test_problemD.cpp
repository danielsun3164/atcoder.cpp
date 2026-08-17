#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;
using ll = long long;
using ld = long double;

void check(int n, int a, int b, vector<ll> &v, ld expected_average, ll expected_count) {
	string input = to_string(n) + " " + to_string(a) + " " + to_string(b) + "\n";
	for (int i = 0; i < n; i++) {
		input += (i ? " " : "") + to_string(v[i]);
	}
	input += "\n";
	Command cmd = execute(input);
	int line = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			line++;
		}
	}
	EXPECT_EQ(2, line);
	istringstream output_ss(cmd.StdOut);
	ld average;
	output_ss >> average;
	EXPECT_TRUE(abs(average - expected_average) < TOLERANCE);
	if (abs(average - expected_average) >= TOLERANCE) {
		cout << "Actual:" << endl;
		cout << fixed << setprecision(10) << average << endl;
		cout << "Expected:" << endl;
		cout << fixed << setprecision(10) << expected_average << endl;
		cout << "TOLERANCE" << endl;
		cout << defaultfloat << TOLERANCE << endl;
	}
	ll count;
	output_ss >> count;
	EXPECT_EQ(expected_count, count);
}

void my_check(string input, string expected) {
	istringstream input_ss(input);
	int n, a, b;
	input_ss >> n >> a >> b;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		input_ss >> v[i];
	}
	istringstream expected_ss(expected);
	ld expected_average;
	ll expected_count;
	expected_ss >> expected_average >> expected_count;
	check(n, a, b, v, expected_average, expected_count);
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC057/D";
	FUNC = &my_check;
	TOLERANCE = 1E-6;
}

TEST(abc057_problemD, case1) {
	vector<ll> v{1, 2, 3, 4, 5};
	check(5, 2, 2, v, 4.5, 1);
}

TEST(abc057_problemD, case2) {
	vector<ll> v{10, 20, 10, 10};
	check(4, 2, 3, v, 15.0, 3);
}

TEST(abc057_problemD, case3) {
	vector<ll> v{1000000000000000, 999999999999999, 999999999999998, 999999999999997,
				 999999999999996};
	check(5, 1, 5, v, 1000000000000000.0, 1);
}

TEST(abc057_problemD, case4) {
	vector<ll> v{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
				 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	check(50, 1, 50, v, 1.0, 1125899906842623);
}
