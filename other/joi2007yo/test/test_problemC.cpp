#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(joi2007yo_problemC, case1) {
	check(string("") + "MRL", string("") + "JOI");
}

TEST(joi2007yo_problemC, case2) {
	check(string("") + "FURDWLD", string("") + "CROATIA");
}

TEST(joi2007yo_problemC, case3) {
	check(string("") + "ABC", string("") + "XYZ");
}
