#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc016A";

TEST(abc016A, case1) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "YES");
}

TEST(abc016A, case2) {
	check(PATH + COMMAND, string("") + "2 29", string("") + "NO");
}

TEST(abc016A, case3) {
	check(PATH + COMMAND, string("") + "12 6", string("") + "YES");
}
