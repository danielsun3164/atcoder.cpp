#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	TOLERANCE = 1E-6;
}

TEST(abc022_problemD, case1) {
	check_about(string("") + "4\n" + "0 0\n" + "0 1\n" + "1 0\n" + "1 1\n" + "0 2\n" + "2 0\n" +
					"-2 0\n" + "0 -2",
				2.8284271247);
}

TEST(abc022_problemD, case2) {
	check_about(string("") + "6\n" + "3 4\n" + "1 3\n" + "4 3\n" + "2 2\n" + "0 1\n" + "2 0\n" +
					"5 5\n" + "-1 2\n" + "-1 -3\n" + "2 1\n" + "2 6\n" + "4 -3",
				2.2360679775);
}
