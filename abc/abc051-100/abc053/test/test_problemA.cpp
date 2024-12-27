#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC068/A";
}

TEST(abc053_problemA, case1) {
	check(string("") + "1000", string("") + "ABC");
}

TEST(abc053_problemA, case2) {
	check(string("") + "2000", string("") + "ARC");
}
