#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc207/D";
}

TEST(abc207_problemD, case1) {
	check(string("") + "3\n" + "0 0\n" + "0 1\n" + "1 0\n" + "2 0\n" + "3 0\n" + "3 1",
		  string("") + "Yes");
}

TEST(abc207_problemD, case2) {
	check(string("") + "3\n" + "1 0\n" + "1 1\n" + "3 0\n" + "-1 0\n" + "-1 1\n" + "-3 0",
		  string("") + "No");
}

TEST(abc207_problemD, case3) {
	check(string("") + "4\n" + "0 0\n" + "2 9\n" + "10 -2\n" + "-6 -7\n" + "0 0\n" + "2 9\n" +
			  "10 -2\n" + "-6 -7",
		  string("") + "Yes");
}

TEST(abc207_problemD, case4) {
	check(string("") + "6\n" + "10 5\n" + "-9 3\n" + "1 -5\n" + "-6 -5\n" + "6 9\n" + "-9 0\n" +
			  "-7 -10\n" + "-10 -5\n" + "5 4\n" + "9 0\n" + "0 -10\n" + "-10 -2",
		  string("") + "Yes");
}
