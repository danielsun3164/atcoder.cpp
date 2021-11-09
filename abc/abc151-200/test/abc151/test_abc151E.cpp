#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc151E";

TEST(abc151E, case1) {
	check(COMMAND, string("") + "4 2\n" + "1 1 3 4", string("") + "11");
}

TEST(abc151E, case2) {
	check(COMMAND, string("") + "6 3\n" + "10 10 10 -10 -10 -10", string("") + "360");
}

TEST(abc151E, case3) {
	check(COMMAND, string("") + "3 1\n" + "1 1 1", string("") + "0");
}

TEST(abc151E, case4) {
	check(COMMAND, string("") + "10 6\n" + "1000000000 1000000000 1000000000 1000000000 1000000000 0 0 0 0 0",
			string("") + "999998537");
}
