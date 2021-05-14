#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemF";

TEST(problemE, case1) {
	check(COMMAND, string("") + "5 4\n" + "3\n" + "2 2\n" + "2 3\n" + "4 2", string("") + "5");
}
