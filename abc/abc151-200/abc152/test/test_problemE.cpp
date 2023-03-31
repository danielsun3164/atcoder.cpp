#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc152_problemE, case1) {
	check(string("") + "3\n" + "2 3 4", string("") + "13");
}

TEST(abc152_problemE, case2) {
	check(string("") + "5\n" + "12 12 12 12 12", string("") + "5");
}

TEST(abc152_problemE, case3) {
	check(string("") + "3\n" + "1000000 999999 999998", string("") + "996989508");
}
