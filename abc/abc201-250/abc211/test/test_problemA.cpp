#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

static const double TOLERANCE = 1E-5;

TEST(abc211_problemA, case1) {
	check_about(string("") + "130 100", 110.0, TOLERANCE);
}

TEST(abc211_problemA, case2) {
	check_about(string("") + "300 50", 133.3333333, TOLERANCE);
}

TEST(abc211_problemA, case3) {
	check_about(string("") + "123 123", 123.0, TOLERANCE);
}
