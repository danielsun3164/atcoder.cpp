#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc010_problemD, case1) {
	check(string("") + "4 2 3\n" + "2 3\n" + "0 1\n" + "1 2\n" + "1 3", string("") + "1");
}

TEST(abc010_problemD, case2) {
	check(string("") + "4 1 4\n" + "3\n" + "0 1\n" + "0 2\n" + "1 3\n" + "2 3\n" + "4 1 4\n" +
			  "3\n" + "0 1\n" + "0 2\n" + "1 3\n" + "2 3",
		  string("") + "1");
}
