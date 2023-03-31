#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc208_problemC, case1) {
	check(string("") + "2 7\n" + "1 8", string("") + "4\n" + "3");
}

TEST(abc208_problemC, case2) {
	check(string("") + "1 3\n" + "33", string("") + "3");
}

TEST(abc208_problemC, case3) {
	check(string("") + "7 1000000000000\n" + "99 8 2 4 43 5 3",
			string("") + "142857142857\n" + "142857142857\n" + "142857142858\n" + "142857142857\n" + "142857142857\n"
					+ "142857142857\n" + "142857142857");
}
