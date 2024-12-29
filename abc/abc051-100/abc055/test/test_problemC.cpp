#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC069/C";
}

TEST(abc055_problemC, case1) {
	check(string("") + "1 6", string("") + "2");
}

TEST(abc055_problemC, case2) {
	check(string("") + "12345 678901", string("") + "175897");
}
