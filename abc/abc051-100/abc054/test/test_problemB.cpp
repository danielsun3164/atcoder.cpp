#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC054/B";
}

TEST(abc054_problemB, case1) {
	check(string("") + "3 2\n" + "#.#\n" + ".#.\n" + "#.#\n" + "#.\n" + ".#", string("") + "Yes");
}

TEST(abc054_problemB, case2) {
	check(string("") + "4 1\n" + "....\n" + "....\n" + "....\n" + "....\n" + "#",
		  string("") + "No");
}
