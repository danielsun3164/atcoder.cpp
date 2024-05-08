#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc224/A";
}

TEST(abc224_problemA, case1) {
	check(string("") + "atcoder", string("") + "er");
}

TEST(abc224_problemA, case2) {
	check(string("") + "tourist", string("") + "ist");
}

TEST(abc224_problemA, case3) {
	check(string("") + "er", string("") + "er");
}
