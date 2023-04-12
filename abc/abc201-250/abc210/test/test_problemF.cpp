#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc210/F";
}

TEST(abc210_problemF, case1) {
	check(string("") + "3\n" + "2 5\n" + "10 9\n" + "4 8", string("") + "Yes");
}

TEST(abc210_problemF, case2) {
	check(string("") + "2\n" + "10 100\n" + "1000 10000", string("") + "No");
}
