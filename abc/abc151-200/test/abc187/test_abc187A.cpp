#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc187A";

TEST(abc187A, case1) {
	check(PATH + COMMAND, string("") + "123 234", string("") + "9");
}

TEST(abc187A, case2) {
	check(PATH + COMMAND, string("") + "593 953", string("") + "17");
}

TEST(abc187A, case3) {
	check(PATH + COMMAND, string("") + "100 999", string("") + "27");
}
