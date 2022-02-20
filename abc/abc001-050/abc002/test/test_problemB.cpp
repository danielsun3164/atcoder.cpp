#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chkd");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "okanemochi", string("") + "knmch");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "aoki", string("") + "k");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "mazushii", string("") + "mzsh");
}
