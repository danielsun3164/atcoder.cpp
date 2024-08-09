#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC066/A";
}

TEST(abc050_problemA, case1) {
	check(string("") + "1 + 2", string("") + "3");
}

TEST(abc050_problemA, case2) {
	check(string("") + "5 - 7", string("") + "-2");
}
