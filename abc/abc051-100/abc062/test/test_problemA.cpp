#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC074/A";
}

TEST(abc062_problemA, case1) {
	check(string("") + "1 3", string("") + "Yes");
}

TEST(abc062_problemA, case2) {
	check(string("") + "2 4", string("") + "No");
}
