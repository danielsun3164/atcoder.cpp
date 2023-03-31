#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc206_problemA, case1) {
	check(string("") + "180", string("") + "Yay!");
}

TEST(abc206_problemA, case2) {
	check(string("") + "200", string("") + ":(");
}

TEST(abc206_problemA, case3) {
	check(string("") + "191", string("") + "so-so");
}
