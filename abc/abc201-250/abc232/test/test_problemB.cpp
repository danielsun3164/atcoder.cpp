#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc232/B";
}

TEST(abc232_problemB, case1) {
	check(string("") + "abc\n" + "ijk", string("") + "Yes");
}

TEST(abc232_problemB, case2) {
	check(string("") + "z\n" + "a", string("") + "Yes");
}

TEST(abc232_problemB, case3) {
	check(string("") + "ppq\n" + "qqp", string("") + "No");
}

TEST(abc232_problemB, case4) {
	check(string("") + "atcoder\n" + "atcoder", string("") + "Yes");
}
