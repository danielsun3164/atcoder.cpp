#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc008_problemA, case1) {
	check(PATH + COMMAND, string("") + "4 7", string("") + "4");
}

TEST(abc008_problemA, case2) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "1");
}
