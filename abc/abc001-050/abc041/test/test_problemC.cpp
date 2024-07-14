#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc041_problemC, case1) {
	check(string("") + "3\n" + "140 180 160", string("") + "2\n" + "3\n" + "1");
}

TEST(abc041_problemC, case2) {
	check(string("") + "2\n" + "1000000000 1", string("") + "1\n" + "2");
}

TEST(abc041_problemC, case3) {
	check(string("") + "8\n" + "3 1 4 15 9 2 6 5",
		  string("") + "4\n" + "5\n" + "7\n" + "8\n" + "3\n" + "1\n" + "6\n" + "2");
}
