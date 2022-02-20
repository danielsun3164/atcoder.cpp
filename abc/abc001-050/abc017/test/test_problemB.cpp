#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "chokuou", string("") + "YES");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "kuccho", string("") + "NO");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "atcoder", string("") + "NO");
}
