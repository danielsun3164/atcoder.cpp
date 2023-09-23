#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc219/C";
}

TEST(abc219_problemC, case1) {
	check(string("") + "bacdefghijklmnopqrstuvwxzy\n" + "4\n" + "abx\n" + "bzz\n" + "bzy\n" + "caa",
			string("") + "bzz\n" + "bzy\n" + "abx\n" + "caa");
}

TEST(abc219_problemC, case2) {
	check(string("") + "zyxwvutsrqponmlkjihgfedcba\n" + "5\n" + "a\n" + "ab\n" + "abc\n" + "ac\n" + "b",
			string("") + "b\n" + "a\n" + "ac\n" + "ab\n" + "abc");
}
