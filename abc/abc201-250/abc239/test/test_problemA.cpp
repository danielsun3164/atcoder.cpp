#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc239/A";
	TOLERANCE = 1E-6;
}

TEST(abc239_problemA, case1) {
	check_about(string("") + "333", 65287.907678222);
}

TEST(abc239_problemA, case2) {
	check_about(string("") + "634", 90086.635834623);
}
