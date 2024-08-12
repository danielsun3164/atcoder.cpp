#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc234/B";
	TOLERANCE = 1E-6;
}

TEST(abc234_problemB, case1) {
	check_about(string("") + "3\n" + "0 0\n" + "0 1\n" + "1 1", 1.4142135624);
}

TEST(abc234_problemB, case2) {
	check_about(
		string("") + "5\n" + "315 271\n" + "-2 -621\n" + "-205 -511\n" + "-952 482\n" + "165 463",
		1455.7159750446);
}
