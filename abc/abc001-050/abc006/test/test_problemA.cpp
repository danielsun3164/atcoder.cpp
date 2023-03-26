#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc006_problemA, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "NO");
}

TEST(abc006_problemA, case2) {
	check(PATH + COMMAND, string("") + "9", string("") + "YES");
}

TEST(abc006_problemA, case3) {
	check(PATH + COMMAND, string("") + "3", string("") + "YES");
}
