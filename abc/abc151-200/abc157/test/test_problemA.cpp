#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC157/A";
}

TEST(abc157_problemA, case1) {
	check(string("") + "5", string("") + "3");
}

TEST(abc157_problemA, case2) {
	check(string("") + "2", string("") + "1");
}

TEST(abc157_problemA, case3) {
	check(string("") + "100", string("") + "50");
}
