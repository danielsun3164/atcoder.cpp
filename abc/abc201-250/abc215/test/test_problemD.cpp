#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "3 12\n" + "6 1 5", string("") + "3\n" + "1\n" + "7\n" + "11");
}
