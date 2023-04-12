#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC188/A";
}

TEST(abc188_problemA, case1) {
	check(string("") + "3 5", string("") + "Yes");
}

TEST(abc188_problemA, case2) {
	check(string("") + "16 2", string("") + "No");
}

TEST(abc188_problemA, case3) {
	check(string("") + "12 15", string("") + "No");
}
