#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "ozRnonnoe", string("") + "zone");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "hellospaceRhellospace", string("") + "");
}
