#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc029_problemA, case1) {
	check(string("") + "dog", string("") + "dogs");
}

TEST(abc029_problemA, case2) {
	check(string("") + "chokudai", string("") + "chokudais");
}
