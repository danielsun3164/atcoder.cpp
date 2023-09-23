#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc199/A";
}

TEST(abc199_problemA, case1) {
	check(string("") + "2 2 4", string("") + "Yes");
}

TEST(abc199_problemA, case2) {
	check(string("") + "10 10 10", string("") + "No");
}

TEST(abc199_problemA, case3) {
	check(string("") + "3 4 5", string("") + "No");
}
