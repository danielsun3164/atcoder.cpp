#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "0601889", string("") + "6881090");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "86910", string("") + "01698");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "01010", string("") + "01010");
}