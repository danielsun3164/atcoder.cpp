#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc189C";

TEST(abc189C, case1) {
	check(COMMAND, string("") + "6\n" + "2 4 4 9 4 9", string("") + "20");
}

TEST(abc189C, case2) {
	check(COMMAND, string("") + "6\n" + "200 4 4 9 4 9", string("") + "200");
}
