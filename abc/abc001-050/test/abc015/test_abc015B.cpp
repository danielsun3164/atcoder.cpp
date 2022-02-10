#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc015B";

TEST(abc015B, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "0 1 3 8", string("") + "4");
}

TEST(abc015B, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 4 9 10 15", string("") + "8");
}
