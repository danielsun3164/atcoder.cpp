#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc221/A";
}

TEST(abc221_problemA, case1) {
	check(string("") + "6 4", string("") + "1024");
}

TEST(abc221_problemA, case2) {
	check(string("") + "5 5", string("") + "1");
}
