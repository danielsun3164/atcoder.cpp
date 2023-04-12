#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC189/C";
}

TEST(abc189_problemC, case1) {
	check(string("") + "6\n" + "2 4 4 9 4 9", string("") + "20");
}

TEST(abc189_problemC, case2) {
	check(string("") + "6\n" + "200 4 4 9 4 9", string("") + "200");
}
