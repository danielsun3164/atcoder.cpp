#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc239/E";
}

TEST(abc239_problemE, case1) {
	check(string("") + "5 2\n" + "1 2 3 4 5\n" + "1 4\n" + "2 1\n" + "2 5\n" + "3 2\n" + "1 2\n" +
			  "2 1",
		  string("") + "4\n" + "5");
}

TEST(abc239_problemE, case2) {
	check(string("") + "6 2\n" + "10 10 10 9 8 8\n" + "1 4\n" + "2 1\n" + "2 5\n" + "3 2\n" +
			  "6 4\n" + "1 4\n" + "2 2",
		  string("") + "9\n" + "10");
}

TEST(abc239_problemE, case3) {
	check(string("") + "4 4\n" + "1 10 100 1000\n" + "1 2\n" + "2 3\n" + "3 4\n" + "1 4\n" +
			  "2 3\n" + "3 2\n" + "4 1",
		  string("") + "1\n" + "10\n" + "100\n" + "1000");
}
