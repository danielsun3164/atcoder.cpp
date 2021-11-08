#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemE_fermat";

TEST(problemE, case1) {
	check(COMMAND, string("") + "3\n" + "5", string("") + "9");
}

TEST(problemE, case2) {
	check(COMMAND, string("") + "19\n" + "21", string("") + "487");
}
