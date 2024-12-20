#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC054/C";
}

TEST(abc054_problemC, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "1 3\n" + "2 3", string("") + "2");
}

TEST(abc054_problemC, case2) {
	check(string("") + "7 7\n" + "1 3\n" + "2 7\n" + "3 4\n" + "4 5\n" + "4 6\n" + "5 6\n" + "6 7",
		  string("") + "1");
}
