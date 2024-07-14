#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc005_problemC, case1) {
	check(string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "2 3 4", string("") + "yes");
}

TEST(abc005_problemC, case2) {
	check(string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "2 3 5", string("") + "no");
}

TEST(abc005_problemC, case3) {
	check(string("") + "1\n" + "3\n" + "1 2 3\n" + "10\n" + "1 2 3 4 5 6 7 8 9 10",
		  string("") + "no");
}

TEST(abc005_problemC, case4) {
	check(string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "1 2 2", string("") + "no");
}

TEST(abc005_problemC, case5) {
	check(string("") + "2\n" + "5\n" + "1 3 6 10 15\n" + "3\n" + "4 8 16", string("") + "yes");
}
