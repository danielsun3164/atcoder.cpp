#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc024_problemD, case1) {
	check(string("") + "15\n" + "35\n" + "21", string("") + "4 2");
}

TEST(abc024_problemD, case2) {
	check(string("") + "126\n" + "252\n" + "210", string("") + "5 4");
}

TEST(abc024_problemD, case3) {
	check(string("") + "144949225\n" + "545897619\n" + "393065978", string("") + "314159 365358");
}
