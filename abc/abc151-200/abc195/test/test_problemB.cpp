#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC195/B";
}

TEST(abc195_problemB, case1) {
	check(string("") + "100 200 2", string("") + "10 20");
}

TEST(abc195_problemB, case2) {
	check(string("") + "120 150 2", string("") + "14 16");
}

TEST(abc195_problemB, case3) {
	check(string("") + "300 333 1", string("") + "UNSATISFIABLE");
}
