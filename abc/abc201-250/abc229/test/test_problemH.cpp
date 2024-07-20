#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc229/H";
}

TEST(abc229_problemH, case1) {
	check(string("") + "3\n" + "BB.\n" + ".B.\n" + "...", string("") + "Takahashi");
}

TEST(abc229_problemH, case2) {
	check(string("") + "2\n" + "..\n" + "WW", string("") + "Snuke");
}

TEST(abc229_problemH, case3) {
	check(string("") + "4\n" + "WWBW\n" + "WWWW\n" + "BWB.\n" + "BBBB", string("") + "Snuke");
}
