#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc159A";

TEST(abc159A, case1) {
	check(PATH + COMMAND, string("") + "2 1", string("") + "1");
}

TEST(abc159A, case2) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "9");
}

TEST(abc159A, case3) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "0");
}

TEST(abc159A, case4) {
	check(PATH + COMMAND, string("") + "13 3", string("") + "81");
}

TEST(abc159A, case5) {
	check(PATH + COMMAND, string("") + "0 3", string("") + "3");
}
