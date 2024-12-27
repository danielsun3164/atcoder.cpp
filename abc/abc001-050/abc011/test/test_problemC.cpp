#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc011_problemC, case1) {
	check(string("") + "2\n" + "1\n" + "7\n" + "15", string("") + "YES");
}

TEST(abc011_problemC, case2) {
	check(string("") + "5\n" + "1\n" + "4\n" + "2", string("") + "YES");
}

TEST(abc011_problemC, case3) {
	check(string("") + "300\n" + "57\n" + "121\n" + "244", string("") + "NO");
}
