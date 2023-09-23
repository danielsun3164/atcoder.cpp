#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc220/B";
}

TEST(abc220_problemB, case1) {
	check(string("") + "2\n" + "1011 10100", string("") + "220");
}

TEST(abc220_problemB, case2) {
	check(string("") + "7\n" + "123 456", string("") + "15642");
}
