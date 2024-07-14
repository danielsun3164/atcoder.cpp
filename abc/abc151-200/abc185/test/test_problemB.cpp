#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC185/B";
}

TEST(abc185_problemB, case1) {
	check(string("") + "10 2 20\n" + "9 11\n" + "13 17", string("") + "Yes");
}

TEST(abc185_problemB, case2) {
	check(string("") + "10 2 20\n" + "9 11\n" + "13 16", string("") + "No");
}

TEST(abc185_problemB, case3) {
	check(string("") + "15 3 30\n" + "5 8\n" + "15 17\n" + "24 27", string("") + "Yes");
}

TEST(abc185_problemB, case4) {
	check(string("") + "20 1 30\n" + "20 29", string("") + "No");
}

TEST(abc185_problemB, case5) {
	check(string("") + "20 1 30\n" + "1 10", string("") + "No");
}
