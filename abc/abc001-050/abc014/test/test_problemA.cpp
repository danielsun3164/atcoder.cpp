#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc014_problemA, case1) {
	check(PATH + COMMAND, string("") + "7\n" + "3", string("") + "2");
}

TEST(abc014_problemA, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "5", string("") + "0");
}

TEST(abc014_problemA, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "100", string("") + "99");
}

TEST(abc014_problemA, case4) {
	check(PATH + COMMAND, string("") + "25\n" + "12", string("") + "11");
}
