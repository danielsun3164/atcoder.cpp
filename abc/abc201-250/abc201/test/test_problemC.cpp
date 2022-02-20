#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "ooo???xxxx", string("") + "108");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "o?oo?oxoxo", string("") + "0");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "xxxxx?xxxo", string("") + "15");
}
