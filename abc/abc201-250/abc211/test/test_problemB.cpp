#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc211_problemB, case1) {
	check(string("") + "3B\n" + "HR\n" + "2B\n" + "H", string("") + "Yes");
}

TEST(abc211_problemB, case2) {
	check(string("") + "2B\n" + "3B\n" + "HR\n" + "3B", string("") + "No");
}
