#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(joi2006yo_problemA, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "9 1\n" + "5 4\n" + "0 8", string("") + "19 8");
}

TEST(joi2006yo_problemA, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "9 1\n" + "5 4\n" + "1 0", string("") + "20 0");
}

TEST(joi2006yo_problemA, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "9 1\n" + "5 5\n" + "1 8", string("") + "15 14");
}
