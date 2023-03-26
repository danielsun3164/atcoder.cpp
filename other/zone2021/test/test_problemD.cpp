#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(zone2021_problemD, case1) {
	check(PATH + COMMAND, string("") + "ozRnonnoe", string("") + "zone");
}

TEST(zone2021_problemD, case2) {
	check(PATH + COMMAND, string("") + "hellospaceRhellospace", string("") + "");
}
