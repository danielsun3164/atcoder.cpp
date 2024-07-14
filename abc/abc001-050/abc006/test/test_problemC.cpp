#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

void check(int n, int m) {
	string input = to_string(n) + " " + to_string(m);
	Command cmd = execute(input);
	istringstream input_ss(cmd.StdOut);
	int a, b, c;
	input_ss >> a >> b >> c;
	EXPECT_EQ(n, a + b + c);
	if (n != a + b + c) {
		cout << n << "!=" << a << "+" << b << "+" << c << endl;
	}
	EXPECT_EQ(m, 2 * a + 3 * b + 4 * c);
	if (m != 2 * a + 3 * b + 4 * c) {
		cout << m << "!=2x" << a << "+3x" << b << "+4x" << c << endl;
	}
}

TEST(abc006_problemC, case1) {
	check(3, 9);
}

TEST(abc006_problemC, case2) {
	check(7, 23);
}

TEST(abc006_problemC, case3) {
	check(string("") + "10 41", string("") + "-1 -1 -1");
}
