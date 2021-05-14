#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex9";

TEST(ex9, case1) {
	check(COMMAND, string("") + "1 2 3", string("") + "2\n" + "10\n" + "100\n" + "99");
}

TEST(ex9, case2) {
	check(COMMAND, string("") + "3 2 5", string("") + "4\n" + "28\n" + "784\n" + "783");
}
