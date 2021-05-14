#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc191A";

TEST(abc191A, case1) {
	check(COMMAND, string("") + "10 3 5 20", string("") + "Yes");
}

TEST(abc191A, case2) {
	check(COMMAND, string("") + "10 3 5 30", string("") + "No");
}
