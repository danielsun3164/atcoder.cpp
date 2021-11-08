#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc188F";

TEST(abc188F, case1) {
	check(COMMAND, string("") + "3 9", string("") + "3");
}

TEST(abc188F, case2) {
	check(COMMAND, string("") + "7 11", string("") + "3");
}

TEST(abc188F, case3) {
	check(COMMAND, string("") + "1000000000000000000 1000000000000000000", string("") + "0");
}
