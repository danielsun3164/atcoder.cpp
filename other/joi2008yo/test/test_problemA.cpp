#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemA";

TEST(problemA, case1) {
	check(COMMAND, string("") + "380", string("") + "4");
}

TEST(problemA, case2) {
	check(COMMAND, string("") + "1", string("") + "15");
}
