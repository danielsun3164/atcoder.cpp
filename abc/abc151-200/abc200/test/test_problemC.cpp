#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc200_problemC, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "123 223 123 523 200 2000", string("") + "4");
}

TEST(abc200_problemC, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 2 3 4 5", string("") + "0");
}

TEST(abc200_problemC, case3) {
	check(PATH + COMMAND, string("") + "8\n" + "199 100 200 400 300 500 600 200", string("") + "9");
}
