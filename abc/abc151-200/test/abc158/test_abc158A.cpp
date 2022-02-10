#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc158A";

TEST(abc158A, case1) {
	check(PATH + COMMAND, string("") + "ABA", string("") + "Yes");
}

TEST(abc158A, case2) {
	check(PATH + COMMAND, string("") + "BBA", string("") + "Yes");
}

TEST(abc158A, case3) {
	check(PATH + COMMAND, string("") + "BBB", string("") + "No");
}
