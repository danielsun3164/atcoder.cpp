#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc006A";

TEST(abc006A, case1) {
	check(COMMAND, string("") + "2", string("") + "NO");
}

TEST(abc006A, case2) {
	check(COMMAND, string("") + "9", string("") + "YES");
}

TEST(abc006A, case3) {
	check(COMMAND, string("") + "3", string("") + "YES");
}
