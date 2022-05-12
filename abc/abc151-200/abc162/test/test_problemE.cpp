#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc162_problemE, case1) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "9");
}

TEST(abc162_problemE, case2) {
	check(PATH + COMMAND, string("") + "3 200", string("") + "10813692");
}

TEST(abc162_problemE, case3) {
	check(PATH + COMMAND, string("") + "100000 100000", string("") + "742202979");
}
