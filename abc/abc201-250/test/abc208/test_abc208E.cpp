#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc208E";

TEST(abc208E, case1) {
	check(COMMAND, string("") + "13 2", string("") + "5");
}

TEST(abc208E, case2) {
	check(COMMAND, string("") + "100 80", string("") + "99");
}

TEST(abc208E, case3) {
	check(COMMAND, string("") + "1000000000000000000 1000000000", string("") + "841103275147365677");
}
