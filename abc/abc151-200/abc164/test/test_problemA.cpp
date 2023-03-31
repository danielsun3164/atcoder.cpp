#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc164_problemA, case1) {
	check(string("") + "4 5", string("") + "unsafe");
}

TEST(abc164_problemA, case2) {
	check(string("") + "100 2", string("") + "safe");
}

TEST(abc164_problemA, case3) {
	check(string("") + "10 10", string("") + "unsafe");
}
