#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc208/A";
}

TEST(abc208_problemA, case1) {
	check(string("") + "2 11", string("") + "Yes");
}

TEST(abc208_problemA, case2) {
	check(string("") + "2 13", string("") + "No");
}

TEST(abc208_problemA, case3) {
	check(string("") + "100 600", string("") + "Yes");
}
