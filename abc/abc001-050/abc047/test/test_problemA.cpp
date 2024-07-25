#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC063/A";
}

TEST(abc047_problemA, case1) {
	check(string("") + "10 30 20", string("") + "Yes");
}

TEST(abc047_problemA, case2) {
	check(string("") + "30 30 100", string("") + "No");
}

TEST(abc047_problemA, case3) {
	check(string("") + "56 25 31", string("") + "Yes");
}
