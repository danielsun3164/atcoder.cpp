#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc186_problemA, case1) {
	check(PATH + COMMAND, string("") + "10 3", string("") + "3");
}

TEST(abc186_problemA, case2) {
	check(PATH + COMMAND, string("") + "1000 1", string("") + "1000");
}
