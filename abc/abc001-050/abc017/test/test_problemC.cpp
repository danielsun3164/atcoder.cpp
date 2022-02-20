#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "4 6\n" + "1 3 30\n" + "2 3 40\n" + "3 6 25\n" + "6 6 10", string("") + "80");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "2 7\n" + "1 3 90\n" + "5 7 90", string("") + "180");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "1 4\n" + "1 4 70", string("") + "0");
}
