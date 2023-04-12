#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC159/B";
}

TEST(abc159_problemB, case1) {
	check(string("") + "akasaka", string("") + "Yes");
}

TEST(abc159_problemB, case2) {
	check(string("") + "level", string("") + "No");
}

TEST(abc159_problemB, case3) {
	check(string("") + "atcoder", string("") + "No");
}
