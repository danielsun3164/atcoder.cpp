#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc223/C";
	TOLERANCE = 1E-5;
}

TEST(abc223_problemC, case1) {
	check_about(string("") + "3\n" + "1 1\n" + "2 1\n" + "3 1", 3.0);
}

TEST(abc223_problemC, case2) {
	check_about(string("") + "3\n" + "1 3\n" + "2 2\n" + "3 1", 3.833333333333333);
}

TEST(abc223_problemC, case3) {
	check_about(string("") + "5\n" + "3 9\n" + "1 2\n" + "4 6\n" + "1 5\n" + "5 3", 8.916666666666668);
}
