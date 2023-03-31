#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex11";
}

TEST(apg4b_ex11, case1) {
	check(string("") + "3\n" + "2\n" + "+ 1\n" + "* 3\n" + "/ 2", string("") + "1:3\n" + "2:9\n" + "3:4");
}

TEST(apg4b_ex11, case2) {
	check(string("") + "2\n" + "3\n" + "/ 2\n" + "/ 2", string("") + "1:1\n" + "2:0");
}

TEST(apg4b_ex11, case3) {
	check(string("") + "4\n" + "3\n" + "+ 1\n" + "/ 0\n" + "* 2\n" + "- 10", string("") + "1:4\n" + "error");
}

TEST(apg4b_ex11, case4) {
	check(string("") + "7\n" + "10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10",
			string("") + "1:100\n" + "2:1000\n" + "3:10000\n" + "4:100000\n" + "5:1000000\n" + "6:10000000\n"
					+ "7:100000000");
}
