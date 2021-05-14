#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex11";

TEST(ex11, case1) {
	check(COMMAND, string("") + "3\n" + "2\n" + "+ 1\n" + "* 3\n" + "/ 2", string("") + "1:3\n" + "2:9\n" + "3:4");
}

TEST(ex11, case2) {
	check(COMMAND, string("") + "2\n" + "3\n" + "/ 2\n" + "/ 2", string("") + "1:1\n" + "2:0");
}

TEST(ex11, case3) {
	check(COMMAND, string("") + "4\n" + "3\n" + "+ 1\n" + "/ 0\n" + "* 2\n" + "- 10", string("") + "1:4\n" + "error");
}

TEST(ex11, case4) {
	check(COMMAND,
			string("") + "7\n" + "10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10\n" + "* 10",
			string("") + "1:100\n" + "2:1000\n" + "3:10000\n" + "4:100000\n" + "5:1000000\n" + "6:10000000\n"
					+ "7:100000000");
}
