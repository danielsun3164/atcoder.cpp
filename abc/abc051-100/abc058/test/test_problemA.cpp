#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC071/A";
}

TEST(abc058_problemA, case1) {
	check(string("") + "2 4 6", string("") + "YES");
}

TEST(abc058_problemA, case2) {
	check(string("") + "2 5 6", string("") + "NO");
}

TEST(abc058_problemA, case3) {
	check(string("") + "3 2 1", string("") + "YES");
}
