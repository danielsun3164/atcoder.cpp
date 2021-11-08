#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc190A";

TEST(abc190A, case1) {
	check(COMMAND, string("") + "2 1 0", string("") + "Takahashi");
}

TEST(abc190A, case2) {
	check(COMMAND, string("") + "2 2 0", string("") + "Aoki");
}

TEST(abc190A, case3) {
	check(COMMAND, string("") + "2 2 1", string("") + "Takahashi");
}
