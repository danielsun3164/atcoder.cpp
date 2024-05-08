#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc224/B";
}

TEST(abc224_problemB, case1) {
	check(string("") + "3 3\n" + "2 1 4\n" + "3 1 3\n" + "6 4 1", string("") + "Yes");
}

TEST(abc224_problemB, case2) {
	check(string("") + "2 4\n" + "4 3 2 1\n" + "5 6 7 8", string("") + "No");
}
