#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc009A";

TEST(abc009A, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "1");
}

TEST(abc009A, case2) {
	check(PATH + COMMAND, string("") + "5", string("") + "3");
}

TEST(abc009A, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}
