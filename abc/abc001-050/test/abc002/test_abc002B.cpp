#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc002B";

TEST(abc002B, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chkd");
}

TEST(abc002B, case2) {
	check(PATH + COMMAND, string("") + "okanemochi", string("") + "knmch");
}

TEST(abc002B, case3) {
	check(PATH + COMMAND, string("") + "aoki", string("") + "k");
}

TEST(abc002B, case4) {
	check(PATH + COMMAND, string("") + "mazushii", string("") + "mzsh");
}
