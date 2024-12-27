#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc220/D";
}

TEST(abc220_problemD, case1) {
	check(string("") + "3\n" + "2 7 6",
		  string("") + "1\n" + "0\n" + "0\n" + "0\n" + "2\n" + "1\n" + "0\n" + "0\n" + "0\n" + "0");
}

TEST(abc220_problemD, case2) {
	check(string("") + "5\n" + "0 1 2 3 4",
		  string("") + "6\n" + "0\n" + "1\n" + "1\n" + "4\n" + "0\n" + "1\n" + "1\n" + "0\n" + "2");
}
