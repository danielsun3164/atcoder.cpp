#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC194/A";
}

TEST(abc194_problemA, case1) {
	check(string("") + "10 8", string("") + "1");
}

TEST(abc194_problemA, case2) {
	check(string("") + "1 2", string("") + "3");
}

TEST(abc194_problemA, case3) {
	check(string("") + "0 0", string("") + "4");
}
