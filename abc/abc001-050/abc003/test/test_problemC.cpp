#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	TOLERANCE = 1E-6;
}

TEST(abc003_problemC, case1) {
	check_about(string("") + "2 2\n" + "1000 1500", 1000.0);
}

TEST(abc003_problemC, case2) {
	check_about(string("") + "2 1\n" + "1000 1500", 750.0);
}

TEST(abc003_problemC, case3) {
	check_about(string("") + "10 5\n" + "2604 2281 3204 2264 2200 2650 2229 2461 2439 2211",
				2820.03125);
}
