#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF別回答";
	EXTERNAL = "abc204/F";
}

TEST(abc204_problemF別回答, case1) {
	check(string("") + "2 2", string("") + "7");
}

TEST(abc204_problemF別回答, case2) {
	check(string("") + "3 3", string("") + "131");
}

TEST(abc204_problemF別回答, case3) {
	check(string("") + "5 100", string("") + "379944232");
}
