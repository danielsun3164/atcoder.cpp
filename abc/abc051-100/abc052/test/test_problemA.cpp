#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC067/A";
}

TEST(abc052_problemA, case1) {
	check(string("") + "3 5 2 7", string("") + "15");
}

TEST(abc052_problemA, case2) {
	check(string("") + "100 600 200 300", string("") + "60000");
}
