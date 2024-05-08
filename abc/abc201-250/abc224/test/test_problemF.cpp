#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc224/F";
}

TEST(abc224_problemF, case1) {
	check(string("") + "1234", string("") + "1736");
}

TEST(abc224_problemF, case2) {
	check(string("") + "1", string("") + "1");
}

TEST(abc224_problemF, case3) {
	check(string("") + "31415926535897932384626433832795", string("") + "85607943");
}
