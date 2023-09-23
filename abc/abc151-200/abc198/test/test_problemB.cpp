#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc198/B";
}

TEST(abc198_problemB, case1) {
	check(string("") + "1210", string("") + "Yes");
}

TEST(abc198_problemB, case2) {
	check(string("") + "777", string("") + "Yes");
}

TEST(abc198_problemB, case3) {
	check(string("") + "123456789", string("") + "No");
}
