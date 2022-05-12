#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc192_problemB, case1) {
	check(PATH + COMMAND, string("") + "dIfFiCuLt", string("") + "Yes");
}

TEST(abc192_problemB, case2) {
	check(PATH + COMMAND, string("") + "eASY", string("") + "No");
}

TEST(abc192_problemB, case3) {
	check(PATH + COMMAND, string("") + "a", string("") + "Yes");
}
