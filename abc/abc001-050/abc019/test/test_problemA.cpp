#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc019_problemA, case1) {
	check(string("") + "2 3 4", string("") + "3");
}

TEST(abc019_problemA, case2) {
	check(string("") + "5 100 5", string("") + "5");
}

TEST(abc019_problemA, case3) {
	check(string("") + "3 3 3", string("") + "3");
}

TEST(abc019_problemA, case4) {
	check(string("") + "3 3 4", string("") + "3");
}
