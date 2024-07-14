#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc011_problemA, case1) {
	check(string("") + "1", string("") + "2");
}

TEST(abc011_problemA, case2) {
	check(string("") + "12", string("") + "1");
}
