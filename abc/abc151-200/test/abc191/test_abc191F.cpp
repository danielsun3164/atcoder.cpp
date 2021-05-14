#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc191F";

TEST(abc191F, case1) {
	check(COMMAND, string("") + "3\n" + "6 9 12", string("") + "2");
}

TEST(abc191F, case2) {
	check(COMMAND, string("") + "4\n" + "8 2 12 6", string("") + "1");
}

TEST(abc191F, case3) {
	check(COMMAND, string("") + "7\n" + "30 28 33 49 27 37 48", string("") + "7");
}
