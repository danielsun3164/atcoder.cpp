#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem013";
	EXTERNAL = "typical90/013";
}

TEST(typical90_problem013, case1) {
	check(string("") + "7 9\n" + "1 2 2\n" + "1 3 3\n" + "2 5 2\n" + "3 4 1\n" + "3 5 4\n" +
			  "4 7 5\n" + "5 6 1\n" + "5 7 6\n" + "6 7 3",
		  string("") + "8\n" + "8\n" + "9\n" + "9\n" + "8\n" + "8\n" + "8");
}

TEST(typical90_problem013, case2) {
	check(string("") + "4 3\n" + "1 2 1\n" + "2 3 10\n" + "3 4 100",
		  string("") + "111\n" + "111\n" + "111\n" + "111");
}

TEST(typical90_problem013, case3) {
	check(string("") + "4 3\n" + "1 2 314\n" + "1 3 159\n" + "1 4 265",
		  string("") + "265\n" + "893\n" + "583\n" + "265");
}
