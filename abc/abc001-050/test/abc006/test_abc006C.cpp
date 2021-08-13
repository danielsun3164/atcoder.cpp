#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc006C";

template<typename ... Args>
void check(int n, int m) {
	string input = to_string(n) + " " + to_string(m);
	Command cmd = execute(COMMAND, input); // @suppress("Invalid arguments")
	streambuf *orig = cin.rdbuf();
	istringstream input_ss(cmd.StdOut);
	cin.rdbuf(input_ss.rdbuf());
	int a, b, c;
	cin >> a >> b >> c;
	EXPECT_EQ(n, a + b + c);
	EXPECT_EQ(m, 2 * a + 3 * b + 4 * c);
	cin.rdbuf(orig);
}

TEST(abc006C, case1) {
	check(3, 9);
}

TEST(abc006C, case2) {
	check(7, 23);
}

TEST(abc006C, case3) {
	check(COMMAND, string("") + "10 41", string("") + "-1 -1 -1");
}
