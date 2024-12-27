#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC163/F";
}

TEST(abc163_problemF, case1) {
	check(string("") + "3\n" + "1 2 1\n" + "1 2\n" + "2 3", string("") + "5\n" + "4\n" + "0");
}

TEST(abc163_problemF, case2) {
	check(string("") + "1\n" + "1", string("") + "1");
}

TEST(abc163_problemF, case3) {
	check(string("") + "2\n" + "1 2\n" + "1 2", string("") + "2\n" + "2");
}

TEST(abc163_problemF, case4) {
	check(string("") + "5\n" + "1 2 3 4 5\n" + "1 2\n" + "2 3\n" + "3 4\n" + "3 5",
		  string("") + "5\n" + "8\n" + "10\n" + "5\n" + "5");
}

TEST(abc163_problemF, case5) {
	check(string("") + "8\n" + "2 7 2 5 4 1 7 5\n" + "3 1\n" + "1 2\n" + "2 7\n" + "4 5\n" +
			  "5 6\n" + "6 8\n" + "7 8",
		  string("") + "18\n" + "15\n" + "0\n" + "14\n" + "23\n" + "0\n" + "23\n" + "0");
}
