#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc158_problemA, case1) {
	check(string("") + "ABA", string("") + "Yes");
}

TEST(abc158_problemA, case2) {
	check(string("") + "BBA", string("") + "Yes");
}

TEST(abc158_problemA, case3) {
	check(string("") + "BBB", string("") + "No");
}
