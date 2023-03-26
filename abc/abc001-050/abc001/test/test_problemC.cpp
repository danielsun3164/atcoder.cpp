#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc001_problemC, case1) {
	check(PATH + COMMAND, string("") + "2750 628", string("") + "W 5");
}

TEST(abc001_problemC, case2) {
	check(PATH + COMMAND, string("") + "161 8", string("") + "C 0");
}

TEST(abc001_problemC, case3) {
	check(PATH + COMMAND, string("") + "3263 15", string("") + "NNW 1");
}

TEST(abc001_problemC, case4) {
	check(PATH + COMMAND, string("") + "1462 1959", string("") + "SE 12");
}

TEST(abc001_problemC, case5) {
	check(PATH + COMMAND, string("") + "1687 1029", string("") + "SSE 8");
}

TEST(abc001_problemC, case6) {
	check(PATH + COMMAND, string("") + "2587 644", string("") + "WSW 5");
}

TEST(abc001_problemC, case7) {
	check(PATH + COMMAND, string("") + "113 201", string("") + "NNE 3");
}

TEST(abc001_problemC, case8) {
	check(PATH + COMMAND, string("") + "2048 16", string("") + "SSW 1");
}
