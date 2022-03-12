#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "abcde\n" + "8", string("") + "bc");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "aeiou\n" + "22", string("") + "ue");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "vwxyz\n" + "25", string("") + "zz");
}
