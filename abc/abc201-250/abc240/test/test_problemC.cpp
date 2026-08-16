#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc240/C";
}

TEST(abc240_problemC, case1) {
	check(string("") + "2 10\n" + "3 6\n" + "4 5", string("") + "Yes");
}

TEST(abc240_problemC, case2) {
	check(string("") + "2 10\n" + "10 100\n" + "10 100", string("") + "No");
}

TEST(abc240_problemC, case3) {
	check(string("") + "4 12\n" + "1 8\n" + "5 7\n" + "3 4\n" + "2 6", string("") + "Yes");
}
