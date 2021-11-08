#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc192D";

TEST(abc192D, case1) {
	check(COMMAND, string("") + "22\n" + "10", string("") + "2");
}

TEST(abc192D, case2) {
	check(COMMAND, string("") + "999\n" + "1500", string("") + "3");
}

TEST(abc192D, case3) {
	check(COMMAND,
			string("") + "100000000000000000000000000000000000000000000000000000000000\n" + "1000000000000000000",
			string("") + "1");
}

TEST(abc192D, case4) {
	check(COMMAND, string("") + "2\n" + "8", string("") + "1");
}

TEST(abc192D, case5) {
	check(COMMAND, string("") + "2\n" + "1", string("") + "0");
}
