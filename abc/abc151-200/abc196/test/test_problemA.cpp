#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC196/A";
}

TEST(abc196_problemA, case1) {
	check(string("") + "0 10\n" + "0 10", string("") + "10");
}

TEST(abc196_problemA, case2) {
	check(string("") + "-100 -100\n" + "100 100", string("") + "-200");
}

TEST(abc196_problemA, case3) {
	check(string("") + "-100 100\n" + "-100 100", string("") + "200");
}
