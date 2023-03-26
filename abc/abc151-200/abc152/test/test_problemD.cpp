#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc152_problemD, case1) {
	check(PATH + COMMAND, string("") + "25", string("") + "17");
}

TEST(abc152_problemD, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}

TEST(abc152_problemD, case3) {
	check(PATH + COMMAND, string("") + "100", string("") + "108");
}

TEST(abc152_problemD, case4) {
	check(PATH + COMMAND, string("") + "2020", string("") + "40812");
}

TEST(abc152_problemD, case5) {
	check(PATH + COMMAND, string("") + "200000", string("") + "400000008");
}
