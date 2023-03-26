#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc034_problemB, case1) {
	check(PATH + COMMAND, string("") + "100", string("") + "99");
}

TEST(abc034_problemB, case2) {
	check(PATH + COMMAND, string("") + "123456789", string("") + "123456790");
}
