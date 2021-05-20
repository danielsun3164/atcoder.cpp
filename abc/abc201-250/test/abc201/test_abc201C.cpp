#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc201C";

TEST(abc201C, case1) {
	check(COMMAND, string("") + "ooo???xxxx", string("") + "108");
}

TEST(abc201C, case2) {
	check(COMMAND, string("") + "o?oo?oxoxo", string("") + "0");
}

TEST(abc201C, case3) {
	check(COMMAND, string("") + "xxxxx?xxxo", string("") + "15");
}
