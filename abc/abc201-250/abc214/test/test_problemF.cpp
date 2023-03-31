#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc214_problemF, case1) {
	check(string("") + "abc", string("") + "4");
}

TEST(abc214_problemF, case2) {
	check(string("") + "aa", string("") + "1");
}

TEST(abc214_problemF, case3) {
	check(string("") + "acba", string("") + "6");
}

TEST(abc214_problemF, case4) {
	check(string("") + "chokudai", string("") + "54");
}
