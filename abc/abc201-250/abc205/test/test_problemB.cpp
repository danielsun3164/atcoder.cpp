#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc205/B";
}

TEST(abc205_problemB, case1) {
	check(string("") + "5\n" + "3 1 2 4 5", string("") + "Yes");
}

TEST(abc205_problemB, case2) {
	check(string("") + "6\n" + "3 1 4 1 5 2", string("") + "No");
}

TEST(abc205_problemB, case3) {
	check(string("") + "3\n" + "1 2 3", string("") + "Yes");
}

TEST(abc205_problemB, case4) {
	check(string("") + "1\n" + "1", string("") + "Yes");
}
