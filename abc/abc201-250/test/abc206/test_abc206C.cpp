#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc206C";

TEST(abc206C, case1) {
	check(COMMAND, string("") + "3\n" + "1 7 1", string("") + "2");
}

TEST(abc206C, case2) {
	check(COMMAND, string("") + "10\n" + "1 10 100 1000 10000 100000 1000000 10000000 100000000 1000000000",
			string("") + "45");
}

TEST(abc206C, case3) {
	check(COMMAND, string("") + "20\n" + "7 8 1 1 4 9 9 6 8 2 4 1 1 9 5 5 5 3 6 4", string("") + "173");
}
