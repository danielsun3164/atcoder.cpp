#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc209/B";
}

TEST(abc209_problemB, case1) {
	check(string("") + "2 3\n" + "1 3", string("") + "Yes");
}

TEST(abc209_problemB, case2) {
	check(string("") + "4 10\n" + "3 3 4 4", string("") + "No");
}

TEST(abc209_problemB, case3) {
	check(string("") + "8 30\n" + "3 1 4 1 5 9 2 6", string("") + "Yes");
}
