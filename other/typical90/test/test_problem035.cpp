#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem035";
	EXTERNAL = "typical90/035";
}

TEST(typical90_problem035, case1) {
	check(string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "1 5\n" + "3 6\n" + "5\n" + "2 1 2\n" +
			  "3 1 3 5\n" + "4 2 3 4 5\n" + "5 1 2 3 5 6\n" + "6 1 2 3 4 5 6",
		  string("") + "1\n" + "3\n" + "4\n" + "4\n" + "5");
}

TEST(typical90_problem035, case2) {
	check(string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "1 5\n" + "3 6\n" + "5\n" + "2 1 2\n" +
			  "2 3 4\n" + "2 4 6\n" + "2 1 5\n" + "2 2 5",
		  string("") + "1\n" + "1\n" + "2\n" + "1\n" + "2");
}

TEST(typical90_problem035, case3) {
	check(string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "1 5\n" + "3 6\n" + "5\n" +
			  "3 1 2 3\n" + "3 1 2 5\n" + "3 1 3 6\n" + "3 3 4 5\n" + "3 4 5 6",
		  string("") + "2\n" + "2\n" + "3\n" + "4\n" + "5");
}
