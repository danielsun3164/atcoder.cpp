#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc202E";

TEST(abc202E, case1) {
	check(COMMAND, string("") + "7\n" + "1 1 2 2 4 2\n" + "4\n" + "1 2\n" + "7 2\n" + "4 1\n" + "5 5",
			string("") + "3\n" + "1\n" + "0\n" + "0");
}
