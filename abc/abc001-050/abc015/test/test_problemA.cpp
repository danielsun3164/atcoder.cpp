#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "isuruu\n" + "isleapyear", string("") + "isleapyear");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "ttttiiiimmmmeeee\n" + "time", string("") + "ttttiiiimmmmeeee");
}
