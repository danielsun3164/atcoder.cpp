#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem019";
	EXTERNAL = "typical90/019";
}

TEST(typical90_problem019, case1) {
	check(string("") + "3\n" + "6 2 3 9 8 6", string("") + "2");
}

TEST(typical90_problem019, case2) {
	check(string("") + "3\n" + "1 3 5 5 3 1", string("") + "0");
}

TEST(typical90_problem019, case3) {
	check(string("") + "4\n" + "1 2 4 8 16 32 64 128", string("") + "85");
}

TEST(typical90_problem019, case4) {
	check(
		string("") + "15\n" +
			"73 8 55 26 97 48 37 47 35 55 5 17 62 2 60 23 99 73 34 75 7 46 82 84 29 41 32 31 52 32",
		string("") + "207");
}
