#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc007_problemA, case1) {
	check(string("") + "4", string("") + "3");
}

TEST(abc007_problemA, case2) {
	check(string("") + "100", string("") + "99");
}

TEST(abc007_problemA, case3) {
	check(string("") + "1", string("") + "0");
}
