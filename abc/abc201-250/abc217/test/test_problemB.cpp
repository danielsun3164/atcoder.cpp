#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc217_problemB, case1) {
	check(PATH + COMMAND, string("") + "ARC\n" + "AGC\n" + "AHC", string("") + "ABC");
}

TEST(abc217_problemB, case2) {
	check(PATH + COMMAND, string("") + "AGC\n" + "ABC\n" + "ARC", string("") + "AHC");
}
