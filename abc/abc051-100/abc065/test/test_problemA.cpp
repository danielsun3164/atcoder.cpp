#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC076/A";
}

TEST(abc065_problemA, case1) {
	check(string("") + "4 3 6", string("") + "safe");
}

TEST(abc065_problemA, case2) {
	check(string("") + "6 5 1", string("") + "delicious");
}

TEST(abc065_problemA, case3) {
	check(string("") + "3 7 12", string("") + "dangerous");
}
