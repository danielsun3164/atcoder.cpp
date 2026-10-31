#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc248/A";
}

TEST(abc248_problemA, case1) {
	check(string("") + "023456789", string("") + "1");
}

TEST(abc248_problemA, case2) {
	check(string("") + "459230781", string("") + "6");
}
