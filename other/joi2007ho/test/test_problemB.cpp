#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB";

TEST(problemB, case1) {
	check(COMMAND, string("") + "7 5\n" + "6\n" + "2\n" + "4\n" + "7\n" + "1", string("") + "2");
}

TEST(problemB, case2) {
	check(COMMAND, string("") + "7 5\n" + "6\n" + "2\n" + "0\n" + "4\n" + "7", string("") + "4");
}
