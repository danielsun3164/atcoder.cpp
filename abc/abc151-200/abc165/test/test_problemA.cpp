#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "7\n" + "500 600", string("") + "OK");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "5 7", string("") + "NG");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "11 11", string("") + "OK");
}
