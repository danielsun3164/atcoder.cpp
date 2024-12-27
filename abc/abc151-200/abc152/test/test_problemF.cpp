#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC152/F";
}

TEST(abc152_problemF, case1) {
	check(string("") + "3\n" + "1 2\n" + "2 3\n" + "1\n" + "1 3", string("") + "3");
}

TEST(abc152_problemF, case2) {
	check(string("") + "2\n" + "1 2\n" + "1\n" + "1 2", string("") + "1");
}

TEST(abc152_problemF, case3) {
	check(string("") + "5\n" + "1 2\n" + "3 2\n" + "3 4\n" + "5 3\n" + "3\n" + "1 3\n" + "2 4\n" +
			  "2 5",
		  string("") + "9");
}

TEST(abc152_problemF, case4) {
	check(string("") + "8\n" + "1 2\n" + "2 3\n" + "4 3\n" + "2 5\n" + "6 3\n" + "6 7\n" + "8 6\n" +
			  "5\n" + "2 7\n" + "3 5\n" + "1 6\n" + "2 8\n" + "7 8",
		  string("") + "62");
}
