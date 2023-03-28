#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc217_problemA, case1) {
	check(PATH + COMMAND, string("") + "abc atcoder", string("") + "Yes");
}

TEST(abc217_problemA, case2) {
	check(PATH + COMMAND, string("") + "arc agc", string("") + "No");
}

TEST(abc217_problemA, case3) {
	check(PATH + COMMAND, string("") + "a aa", string("") + "Yes");
}
