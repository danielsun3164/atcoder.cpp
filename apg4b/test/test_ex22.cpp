#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex22";
}

TEST(apg4b_ex22, case1) {
	check(string("") + "3\n" + "5 2\n" + "2 7\n" + "4 1", string("") + "4 1\n" + "5 2\n" + "2 7");
}

TEST(apg4b_ex22, case2) {
	check(string("") + "5\n" + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10",
		  string("") + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10");
}
