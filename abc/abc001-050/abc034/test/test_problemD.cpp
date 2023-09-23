#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	TOLERANCE = 1E-3;
}

TEST(abc034_problemD, case1) {
	check_about(string("") + "3 2\n" + "100 15\n" + "300 20\n" + "200 30", 25.0);
}
