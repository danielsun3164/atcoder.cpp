#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC155/B";
}

TEST(abc155_problemB, case1) {
	check(string("") + "5\n" + "6 7 9 10 31", string("") + "APPROVED");
}

TEST(abc155_problemB, case2) {
	check(string("") + "3\n" + "28 27 24", string("") + "DENIED");
}
