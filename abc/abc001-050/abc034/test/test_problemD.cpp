#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";
static const double TOLERANCE = 1E-3;

TEST(abc034_problemD, case1) {
	check_about(PATH + COMMAND, string("") + "3 2\n" + "100 15\n" + "300 20\n" + "200 30", 25.0, TOLERANCE);
}
