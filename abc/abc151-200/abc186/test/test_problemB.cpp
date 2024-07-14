#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC186/B";
}

TEST(abc186_problemB, case1) {
	check(string("") + "2 3\n" + "2 2 3\n" + "3 2 2", string("") + "2");
}

TEST(abc186_problemB, case2) {
	check(string("") + "3 3\n" + "99 99 99\n" + "99 0 99\n" + "99 99 99", string("") + "792");
}

TEST(abc186_problemB, case3) {
	check(string("") + "3 2\n" + "4 4\n" + "4 4\n" + "4 4", string("") + "0");
}
