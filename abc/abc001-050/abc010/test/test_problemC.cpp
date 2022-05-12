#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc010_problemC, case1) {
	check(PATH + COMMAND, string("") + "1 1 8 2 2 4\n" + "1\n" + "4 5", string("") + "NO");
}

TEST(abc010_problemC, case2) {
	check(PATH + COMMAND, string("") + "1 1 8 2 2 6\n" + "1\n" + "4 5", string("") + "YES");
}

TEST(abc010_problemC, case3) {
	check(PATH + COMMAND, string("") + "1 1 8 2 2 5\n" + "1\n" + "4 5", string("") + "YES");
}

TEST(abc010_problemC, case4) {
	check(PATH + COMMAND, string("") + "7 7 1 1 3 4\n" + "3\n" + "8 1\n" + "1 7\n" + "9 9", string("") + "YES");
}
