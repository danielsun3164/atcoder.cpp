#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemL";
}

TEST(practice2_problemL, case1) {
	check(string("") + "5 5\n" + "0 1 0 0 1\n" + "2 1 5\n" + "1 3 4\n" + "2 2 5\n" + "1 1 3\n" +
			  "2 1 2",
		  string("") + "2\n" + "0\n" + "1");
}
