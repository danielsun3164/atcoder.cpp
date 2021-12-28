#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc154E";

TEST(abc154E, case1) {
	check(PATH + COMMAND, string("") + "100\n" + "1", string("") + "19");
}

TEST(abc154E, case2) {
	check(PATH + COMMAND, string("") + "25\n" + "2", string("") + "14");
}

TEST(abc154E, case3) {
	check(PATH + COMMAND, string("") + "314159\n" + "2", string("") + "937");
}

TEST(abc154E, case4) {
	check(PATH + COMMAND,
			string("")
					+ "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999\n"
					+ "3", string("") + "117879300");
}
