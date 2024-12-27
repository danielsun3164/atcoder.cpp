#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ZONe2021/B";
	TOLERANCE = 1E-3;
}

TEST(zone2021_problemB, case1) {
	check_about(string("") + "1 10 10\n" + "3 5", 2.857142857142857);
}

TEST(zone2021_problemB, case2) {
	check_about(string("") + "1 10 10\n" + "3 2", 0.0);
}

TEST(zone2021_problemB, case3) {
	check_about(
		string("") + "5 896 483\n" + "228 59\n" + "529 310\n" + "339 60\n" + "78 266\n" + "659 391",
		245.3080684596577);
}
