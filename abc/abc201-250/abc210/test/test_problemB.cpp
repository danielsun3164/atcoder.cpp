#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc210/B";
}

TEST(abc210_problemB, case1) {
	check(string("") + "5\n" + "00101", string("") + "Takahashi");
}

TEST(abc210_problemB, case2) {
	check(string("") + "3\n" + "010", string("") + "Aoki");
}
