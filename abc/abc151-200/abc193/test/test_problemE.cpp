#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc193_problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5 2 7 6\n" + "1 1 3 1\n" + "999999999 1 1000000000 1",
			string("") + "20\n" + "infinity\n" + "1000000000999999999");
}
