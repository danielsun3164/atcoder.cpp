#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc154_problemC, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "2 6 1 4 5", string("") + "YES");
}

TEST(abc154_problemC, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "4 1 3 1 6 2", string("") + "NO");
}

TEST(abc154_problemC, case3) {
	check(PATH + COMMAND, string("") + "2\n" + "10000000 10000000", string("") + "NO");
}
