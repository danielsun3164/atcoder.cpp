#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "10 3 5 20", string("") + "Yes");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "10 3 5 30", string("") + "No");
}