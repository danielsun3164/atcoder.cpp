#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc028_problemA, case1) {
	check(string("") + "80", string("") + "Good");
}

TEST(abc028_problemA, case2) {
	check(string("") + "100", string("") + "Perfect");
}

TEST(abc028_problemA, case3) {
	check(string("") + "59", string("") + "Bad");
}

TEST(abc028_problemA, case4) {
	check(string("") + "95", string("") + "Great");
}
