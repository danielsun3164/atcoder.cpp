#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "180", string("") + "Yay!");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "200", string("") + ":(");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "191", string("") + "so-so");
}
