#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc002_problemB, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chkd");
}

TEST(abc002_problemB, case2) {
	check(PATH + COMMAND, string("") + "okanemochi", string("") + "knmch");
}

TEST(abc002_problemB, case3) {
	check(PATH + COMMAND, string("") + "aoki", string("") + "k");
}

TEST(abc002_problemB, case4) {
	check(PATH + COMMAND, string("") + "mazushii", string("") + "mzsh");
}
