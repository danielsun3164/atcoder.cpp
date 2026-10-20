#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC074/B";
}

TEST(abc062_problemB, case1) {
	check(string("") + "2 3\n" + "abc\n" + "arc",
		  string("") + "#####\n" + "#abc#\n" + "#arc#\n" + "#####");
}

TEST(abc062_problemB, case2) {
	check(string("") + "1 1\n" + "z", string("") + "###\n" + "#z#\n" + "###");
}
