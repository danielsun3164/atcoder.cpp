#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc215_problemC, case1) {
	check(PATH + COMMAND, string("") + "aab 2", string("") + "aba");
}

TEST(abc215_problemC, case2) {
	check(PATH + COMMAND, string("") + "baba 4", string("") + "baab");
}

TEST(abc215_problemC, case3) {
	check(PATH + COMMAND, string("") + "ydxwacbz 40320", string("") + "zyxwdcba");
}
