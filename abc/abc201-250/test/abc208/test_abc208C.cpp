#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc208C";

TEST(abc208C, case1) {
	check(PATH + COMMAND, string("") + "2 7\n" + "1 8", string("") + "4\n" + "3");
}

TEST(abc208C, case2) {
	check(PATH + COMMAND, string("") + "1 3\n" + "33", string("") + "3");
}

TEST(abc208C, case3) {
	check(PATH + COMMAND, string("") + "7 1000000000000\n" + "99 8 2 4 43 5 3",
			string("") + "142857142857\n" + "142857142857\n" + "142857142858\n" + "142857142857\n" + "142857142857\n"
					+ "142857142857\n" + "142857142857");
}
