#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC160/F";
}

TEST(abc160_problemF, case1) {
	check(string("") + "3\n" + "1 2\n" + "1 3", string("") + "2\n" + "1\n" + "1");
}

TEST(abc160_problemF, case2) {
	check(string("") + "2\n" + "1 2", string("") + "1\n" + "1");
}

TEST(abc160_problemF, case3) {
	check(string("") + "5\n" + "1 2\n" + "2 3\n" + "3 4\n" + "3 5",
		  string("") + "2\n" + "8\n" + "12\n" + "3\n" + "3");
}

TEST(abc160_problemF, case4) {
	check(string("") + "8\n" + "1 2\n" + "2 3\n" + "3 4\n" + "3 5\n" + "3 6\n" + "6 7\n" + "6 8",
		  string("") + "40\n" + "280\n" + "840\n" + "120\n" + "120\n" + "504\n" + "72\n" + "72");
}
