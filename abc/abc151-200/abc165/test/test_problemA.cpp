#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC165/A";
}

TEST(abc165_problemA, case1) {
	check(string("") + "7\n" + "500 600", string("") + "OK");
}

TEST(abc165_problemA, case2) {
	check(string("") + "4\n" + "5 7", string("") + "NG");
}

TEST(abc165_problemA, case3) {
	check(string("") + "1\n" + "11 11", string("") + "OK");
}
