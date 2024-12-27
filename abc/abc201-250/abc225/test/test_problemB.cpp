#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc225/B";
}

TEST(abc225_problemB, case1) {
	check(string("") + "5\n" + "1 4\n" + "2 4\n" + "3 4\n" + "4 5", string("") + "Yes");
}

TEST(abc225_problemB, case2) {
	check(string("") + "4\n" + "2 4\n" + "1 4\n" + "2 3", string("") + "No");
}

TEST(abc225_problemB, case3) {
	check(string("") + "10\n" + "9 10\n" + "3 10\n" + "4 10\n" + "8 10\n" + "1 10\n" + "2 10\n" +
			  "7 10\n" + "6 10\n" + "5 10",
		  string("") + "Yes");
}
