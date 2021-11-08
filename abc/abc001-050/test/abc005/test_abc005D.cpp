#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc005D";

TEST(abc005D, case1) {
	check(COMMAND, string("") + "3\n" + "3 2 1\n" + "2 2 1\n" + "1 1 1\n" + "3\n" + "1\n" + "4\n" + "9",
			string("") + "3\n" + "9\n" + "14");
}

TEST(abc005D, case2) {
	check(COMMAND, string("") + "3\n" + "1 1 1\n" + "1 1 1\n" + "9 9 9\n" + "1\n" + "4", string("") + "27");
}
