#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc002_problemB, case1) {
	check(string("") + "chokudai", string("") + "chkd");
}

TEST(abc002_problemB, case2) {
	check(string("") + "okanemochi", string("") + "knmch");
}

TEST(abc002_problemB, case3) {
	check(string("") + "aoki", string("") + "k");
}

TEST(abc002_problemB, case4) {
	check(string("") + "mazushii", string("") + "mzsh");
}
