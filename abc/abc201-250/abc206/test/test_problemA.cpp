#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc206_problemA, case1) {
	check(PATH + COMMAND, string("") + "180", string("") + "Yay!");
}

TEST(abc206_problemA, case2) {
	check(PATH + COMMAND, string("") + "200", string("") + ":(");
}

TEST(abc206_problemA, case3) {
	check(PATH + COMMAND, string("") + "191", string("") + "so-so");
}
