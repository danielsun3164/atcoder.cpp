#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc006_problemA, case1) {
	check(string("") + "2", string("") + "NO");
}

TEST(abc006_problemA, case2) {
	check(string("") + "9", string("") + "YES");
}

TEST(abc006_problemA, case3) {
	check(string("") + "3", string("") + "YES");
}
