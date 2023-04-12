#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC160/A";
}

TEST(abc160_problemA, case1) {
	check(string("") + "sippuu", string("") + "Yes");
}

TEST(abc160_problemA, case2) {
	check(string("") + "iphone", string("") + "No");
}

TEST(abc160_problemA, case3) {
	check(string("") + "coffee", string("") + "Yes");
}
