#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc228/C";
}

TEST(abc228_problemC, case1) {
	check(string("") + "3 1\n" + "178 205 132\n" + "112 220 96\n" + "36 64 20",
		  string("") + "Yes\n" + "Yes\n" + "No");
}

TEST(abc228_problemC, case2) {
	check(string("") + "2 1\n" + "300 300 300\n" + "200 200 200", string("") + "Yes\n" + "Yes");
}

TEST(abc228_problemC, case3) {
	check(string("") + "4 2\n" + "127 235 78\n" + "192 134 298\n" + "28 56 42\n" + "96 120 250",
		  string("") + "Yes\n" + "Yes\n" + "No\n" + "Yes");
}
