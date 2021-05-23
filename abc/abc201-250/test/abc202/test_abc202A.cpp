#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc202A";

TEST(abc202A, case1) {
	check(COMMAND, string("") + "1 4 3", string("") + "13");
}

TEST(abc202A, case2) {
	check(COMMAND, string("") + "5 6 4", string("") + "6");
}
