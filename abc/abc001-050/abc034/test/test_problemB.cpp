#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc034_problemB, case1) {
	check(string("") + "100", string("") + "99");
}

TEST(abc034_problemB, case2) {
	check(string("") + "123456789", string("") + "123456790");
}
