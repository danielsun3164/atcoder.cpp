#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC195/A";
}

TEST(abc195_problemA, case1) {
	check(string("") + "10 120", string("") + "Yes");
}

TEST(abc195_problemA, case2) {
	check(string("") + "10 125", string("") + "No");
}
