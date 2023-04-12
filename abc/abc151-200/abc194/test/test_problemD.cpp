#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "ABC194/D";
	TOLERANCE = 1E-6;
}

TEST(abc194_problemD, case1) {
	check_about(string("") + "2", 2.0);
}

TEST(abc194_problemD, case2) {
	check_about(string("") + "3", 4.5);
}
