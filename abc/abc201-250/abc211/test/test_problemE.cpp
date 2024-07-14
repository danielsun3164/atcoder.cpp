#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc211/E";
}

TEST(abc211_problemE, case1) {
	check(string("") + "3\n" + "5\n" + "#.#\n" + "...\n" + "..#", string("") + "5");
}

TEST(abc211_problemE, case2) {
	check(string("") + "2\n" + "2\n" + "#.\n" + ".#", string("") + "0");
}

TEST(abc211_problemE, case3) {
	check(string("") + "8\n" + "8\n" + "........\n" + "........\n" + "........\n" + "........\n" +
			  "........\n" + "........\n" + "........\n" + "........",
		  string("") + "64678");
}
