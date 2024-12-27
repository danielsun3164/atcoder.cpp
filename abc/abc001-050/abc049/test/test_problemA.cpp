#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC065/A";
}

TEST(abc049_problemA, case1) {
	check(string("") + "a", string("") + "vowel");
}

TEST(abc049_problemA, case2) {
	check(string("") + "z", string("") + "consonant");
}

TEST(abc049_problemA, case3) {
	check(string("") + "s", string("") + "consonant");
}
