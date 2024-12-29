#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC069/A";
}

TEST(abc055_problemA, case1) {
	check(string("") + "20", string("") + "15800");
}

TEST(abc055_problemA, case2) {
	check(string("") + "60", string("") + "47200");
}
