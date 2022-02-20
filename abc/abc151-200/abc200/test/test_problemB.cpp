#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "2021 4", string("") + "50531");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "40000 2", string("") + "1");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "8691 20", string("") + "84875488281");
}
