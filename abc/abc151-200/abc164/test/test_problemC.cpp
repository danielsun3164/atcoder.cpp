#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "apple\n" + "orange\n" + "apple", string("") + "2");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "grape\n" + "grape\n" + "grape\n" + "grape\n" + "grape",
			string("") + "1");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "aaaa\n" + "a\n" + "aaa\n" + "aa", string("") + "4");
}
