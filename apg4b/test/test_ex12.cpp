#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex12";

TEST(ex12, case1) {
	check(PATH + COMMAND, string("") + "1+1+1-1", string("") + "2");
}

TEST(ex12, case2) {
	check(PATH + COMMAND, string("") + "1-1-1-1-1-1", string("") + "-4");
}

TEST(ex12, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}

TEST(ex12, case4) {
	check(PATH + COMMAND, string("") + "1-1-1+1+1+1+1-1+1-1+1-1+1", string("") + "3");
}
