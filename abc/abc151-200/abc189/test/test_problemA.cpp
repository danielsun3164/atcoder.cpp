#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC189/A";
}

TEST(abc189_problemA, case1) {
	check(string("") + "SSS", string("") + "Won");
}

TEST(abc189_problemA, case2) {
	check(string("") + "WVW", string("") + "Lost");
}
