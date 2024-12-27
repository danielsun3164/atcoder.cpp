#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc231/C";
}

TEST(abc231_problemC, case1) {
	check(string("") + "3 1\n" + "100 160 130\n" + "120", string("") + "2");
}

TEST(abc231_problemC, case2) {
	check(string("") + "5 5\n" + "1 2 3 4 5\n" + "6\n" + "5\n" + "4\n" + "3\n" + "2",
		  string("") + "0\n" + "1\n" + "2\n" + "3\n" + "4");
}

TEST(abc231_problemC, case3) {
	check(string("") + "5 5\n" + "804289384 846930887 681692778 714636916 957747794\n" +
			  "424238336\n" + "719885387\n" + "649760493\n" + "596516650\n" + "189641422",
		  string("") + "5\n" + "3\n" + "5\n" + "5\n" + "5");
}
