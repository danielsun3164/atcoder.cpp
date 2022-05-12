#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc016_problemA, case1) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "YES");
}

TEST(abc016_problemA, case2) {
	check(PATH + COMMAND, string("") + "2 29", string("") + "NO");
}

TEST(abc016_problemA, case3) {
	check(PATH + COMMAND, string("") + "12 6", string("") + "YES");
}
