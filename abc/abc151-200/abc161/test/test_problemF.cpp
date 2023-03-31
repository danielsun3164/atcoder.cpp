#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc161_problemF, case1) {
	check(string("") + "6", string("") + "3");
}

TEST(abc161_problemF, case2) {
	check(string("") + "3141", string("") + "13");
}

TEST(abc161_problemF, case3) {
	check(string("") + "314159265358", string("") + "9");
}

TEST(abc161_problemF, case4) {
	check(string("") + "2", string("") + "1");
}
