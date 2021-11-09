#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc151A";

TEST(abc151A, case1) {
	check(COMMAND, string("") + "a", string("") + "b");
}

TEST(abc151A, case2) {
	check(COMMAND, string("") + "y", string("") + "z");
}
