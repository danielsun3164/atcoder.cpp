#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex21";

TEST(ex21, case1) {
	check(PATH + COMMAND, string("") + "1000000 100",
			string("") + "f0: 1\n" + "f1: 1000100\n" + "f2: 20000000\n" + "f3: 9\n" + "f4: -1\n" + "f5: -1404227328");
}
