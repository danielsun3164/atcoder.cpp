#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "NO");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "9", string("") + "YES");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "3", string("") + "YES");
}
