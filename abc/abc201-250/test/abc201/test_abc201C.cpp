#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc201C";

TEST(abc201C, case1) {
	check(PATH + COMMAND, string("") + "ooo???xxxx", string("") + "108");
}

TEST(abc201C, case2) {
	check(PATH + COMMAND, string("") + "o?oo?oxoxo", string("") + "0");
}

TEST(abc201C, case3) {
	check(PATH + COMMAND, string("") + "xxxxx?xxxo", string("") + "15");
}
