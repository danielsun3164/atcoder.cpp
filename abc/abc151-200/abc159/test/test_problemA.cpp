#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc159_problemA, case1) {
	check(PATH + COMMAND, string("") + "2 1", string("") + "1");
}

TEST(abc159_problemA, case2) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "9");
}

TEST(abc159_problemA, case3) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "0");
}

TEST(abc159_problemA, case4) {
	check(PATH + COMMAND, string("") + "13 3", string("") + "81");
}

TEST(abc159_problemA, case5) {
	check(PATH + COMMAND, string("") + "0 3", string("") + "3");
}
