#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE_fermat";

TEST(joisc2007_problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5", string("") + "9");
}

TEST(joisc2007_problemE, case2) {
	check(PATH + COMMAND, string("") + "19\n" + "21", string("") + "487");
}
