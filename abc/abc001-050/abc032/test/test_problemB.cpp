#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "abcabc\n" + "2", string("") + "3");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "aaaaa\n" + "1", string("") + "1");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "hello\n" + "10", string("") + "0");
}
