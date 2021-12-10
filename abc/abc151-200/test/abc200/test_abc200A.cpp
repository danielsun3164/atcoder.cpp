#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc200A";

TEST(abc200A, case1) {
	check(PATH + COMMAND, string("") + "2021", string("") + "21");
}

TEST(abc200A, case2) {
	check(PATH + COMMAND, string("") + "200", string("") + "2");
}
