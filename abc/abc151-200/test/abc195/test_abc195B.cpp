#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195B";

TEST(abc195B, case1) {
	check(COMMAND, string("") + "100 200 2", string("") + "10 20");
}

TEST(abc195B, case2) {
	check(COMMAND, string("") + "120 150 2", string("") + "14 16");
}

TEST(abc195B, case3) {
	check(COMMAND, string("") + "300 333 1", string("") + "UNSATISFIABLE");
}
