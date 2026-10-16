#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc244/A";
}

TEST(abc244_problemA, case1) {
	check(string("") + "5\n" + "abcde", string("") + "e");
}

TEST(abc244_problemA, case2) {
	check(string("") + "1\n" + "a", string("") + "a");
}
