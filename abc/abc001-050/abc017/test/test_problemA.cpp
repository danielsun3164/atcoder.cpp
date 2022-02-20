#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "50 7\n" + "40 8\n" + "30 9", string("") + "94");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "990 10\n" + "990 10\n" + "990 10", string("") + "2970");
}
