#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc223/A";
}

TEST(abc223_problemA, case1) {
	check(string("") + "500", string("") + "Yes");
}

TEST(abc223_problemA, case2) {
	check(string("") + "40", string("") + "No");
}

TEST(abc223_problemA, case3) {
	check(string("") + "0", string("") + "No");
}
