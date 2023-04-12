#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC189/B";
}

TEST(abc189_problemB, case1) {
	check(string("") + "2 15\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(abc189_problemB, case2) {
	check(string("") + "2 10\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(abc189_problemB, case3) {
	check(string("") + "3 1000000\n" + "1000 100\n" + "1000 100\n" + "1000 100", string("") + "-1");
}
