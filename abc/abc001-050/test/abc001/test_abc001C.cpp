#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc001C";

TEST(abc001C, case1) {
	check(PATH + COMMAND, string("") + "2750 628", string("") + "W 5");
}

TEST(abc001C, case2) {
	check(PATH + COMMAND, string("") + "161 8", string("") + "C 0");
}

TEST(abc001C, case3) {
	check(PATH + COMMAND, string("") + "3263 15", string("") + "NNW 1");
}

TEST(abc001C, case4) {
	check(PATH + COMMAND, string("") + "1462 1959", string("") + "SE 12");
}

TEST(abc001C, case5) {
	check(PATH + COMMAND, string("") + "1687 1029", string("") + "SSE 8");
}

TEST(abc001C, case6) {
	check(PATH + COMMAND, string("") + "2587 644", string("") + "WSW 5");
}

TEST(abc001C, case7) {
	check(PATH + COMMAND, string("") + "113 201", string("") + "NNE 3");
}

TEST(abc001C, case8) {
	check(PATH + COMMAND, string("") + "2048 16", string("") + "SSW 1");
}
