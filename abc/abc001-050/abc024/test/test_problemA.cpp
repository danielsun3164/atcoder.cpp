#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "100 200 50 20\n" + "40 10", string("") + "3500");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "400 1000 400 21\n" + "10 10", string("") + "14000");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "400 1000 400 20\n" + "10 10", string("") + "6000");
}
