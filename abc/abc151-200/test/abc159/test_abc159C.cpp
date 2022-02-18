#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc159C";
static const double TOLERANCE = 1E-6;

TEST(abc159C, case1) {
	check_about(PATH + COMMAND, string("") + "3", 1.0, TOLERANCE);
}

TEST(abc159C, case2) {
	check_about(PATH + COMMAND, string("") + "999", 36926037.0, TOLERANCE);
}
