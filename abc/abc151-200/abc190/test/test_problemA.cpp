#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc190_problemA, case1) {
	check(PATH + COMMAND, string("") + "2 1 0", string("") + "Takahashi");
}

TEST(abc190_problemA, case2) {
	check(PATH + COMMAND, string("") + "2 2 0", string("") + "Aoki");
}

TEST(abc190_problemA, case3) {
	check(PATH + COMMAND, string("") + "2 2 1", string("") + "Takahashi");
}
