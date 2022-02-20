#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1\n" + "7\n" + "15", string("") + "YES");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1\n" + "4\n" + "2", string("") + "YES");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "300\n" + "57\n" + "121\n" + "244", string("") + "NO");
}
