#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem040";
}

TEST(typical90_problem040, case1) {
	check(string("") + "5 5\n" + "5 2 10 3 6\n" + "1 3\n" + "1 3\n" + "0\n" + "1 5\n" + "0", string("") + "2");
}

TEST(typical90_problem040, case2) {
	check(string("") + "6 10\n" + "8 6 9 1 2 0\n" + "1 3\n" + "2 3 4\n" + "1 5\n" + "1 5\n" + "1 6\n" + "0",
			string("") + "0");
}
