#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC186/A";
}

TEST(abc186_problemA, case1) {
	check(string("") + "10 3", string("") + "3");
}

TEST(abc186_problemA, case2) {
	check(string("") + "1000 1", string("") + "1000");
}
