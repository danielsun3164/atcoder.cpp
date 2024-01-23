#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc221/B";
}

TEST(abc221_problemB, case1) {
	check(string("") + "abc\n" + "acb", string("") + "Yes");
}

TEST(abc221_problemB, case2) {
	check(string("") + "aabb\n" + "bbaa", string("") + "No");
}

TEST(abc221_problemB, case3) {
	check(string("") + "abcde\n" + "abcde", string("") + "Yes");
}
