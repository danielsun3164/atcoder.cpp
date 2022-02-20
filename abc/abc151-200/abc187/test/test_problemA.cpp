#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "123 234", string("") + "9");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "593 953", string("") + "17");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "100 999", string("") + "27");
}
