#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB";

TEST(problemB, case1) {
	check(COMMAND, string("") + "JOIJOI", string("") + "2\n" + "0");
}

TEST(problemB, case2) {
	check(COMMAND, string("") + "JOIOIOIOI", string("") + "1\n" + "3");
}

TEST(problemB, case3) {
	check(COMMAND, string("") + "JOIOIJOINXNXJIOIOIOJ", string("") + "2\n" + "3");
}
