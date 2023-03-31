#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}
static const double TOLERANCE = 1E-2;

TEST(abc163_problemA, case1) {
	check_about(string("") + "1", 6.28318530717958623200, TOLERANCE);
}

TEST(abc163_problemA, case2) {
	check_about(string("") + "73", 458.67252742410977361942, TOLERANCE);
}
