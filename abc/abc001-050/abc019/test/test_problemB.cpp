#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc019_problemB, case1) {
	check(PATH + COMMAND, string("") + "aabbbaad", string("") + "a2b3a2d1");
}

TEST(abc019_problemB, case2) {
	check(PATH + COMMAND, string("") + "aabbbbbbbbbbbbxyza", string("") + "a2b12x1y1z1a1");
}

TEST(abc019_problemB, case3) {
	check(PATH + COMMAND, string("") + "edcba", string("") + "e1d1c1b1a1");
}
