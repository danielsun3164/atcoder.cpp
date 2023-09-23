#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc025_problemA, case1) {
	check(string("") + "abcde\n" + "8", string("") + "bc");
}

TEST(abc025_problemA, case2) {
	check(string("") + "aeiou\n" + "22", string("") + "ue");
}

TEST(abc025_problemA, case3) {
	check(string("") + "vwxyz\n" + "25", string("") + "zz");
}
