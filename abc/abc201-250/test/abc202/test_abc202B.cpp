#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc202B";

TEST(abc202B, case1) {
	check(COMMAND, string("") + "0601889", string("") + "6881090");
}

TEST(abc202B, case2) {
	check(COMMAND, string("") + "86910", string("") + "01698");
}

TEST(abc202B, case3) {
	check(COMMAND, string("") + "01010", string("") + "01010");
}
