#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC159/C";
	TOLERANCE = 1E-6;
}

TEST(abc159_problemC, case1) {
	check_about(string("") + "3", 1.0);
}

TEST(abc159_problemC, case2) {
	check_about(string("") + "999", 36926037.0);
}
