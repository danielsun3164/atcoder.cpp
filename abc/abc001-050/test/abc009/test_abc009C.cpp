#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc009C";

TEST(abc009C, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "abc", string("") + "abc");
}

TEST(abc009C, case2) {
	check(PATH + COMMAND, string("") + "7 2\n" + "atcoder", string("") + "actoder");
}

TEST(abc009C, case3) {
	check(PATH + COMMAND, string("") + "7 7\n" + "atcoder", string("") + "acdeort");
}

TEST(abc009C, case4) {
	check(PATH + COMMAND, string("") + "10 3\n" + "helloworld", string("") + "dehloworll");
}
