#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc014_problemA, case1) {
	check(string("") + "7\n" + "3", string("") + "2");
}

TEST(abc014_problemA, case2) {
	check(string("") + "5\n" + "5", string("") + "0");
}

TEST(abc014_problemA, case3) {
	check(string("") + "1\n" + "100", string("") + "99");
}

TEST(abc014_problemA, case4) {
	check(string("") + "25\n" + "12", string("") + "11");
}
