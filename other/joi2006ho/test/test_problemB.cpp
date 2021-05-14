#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB";

TEST(problemB, case1) {
	check(COMMAND, string("") + "1\n" + "122244", string("") + "113224");
}

TEST(problemB, case2) {
	check(COMMAND, string("") + "1\n" + "44444444444", string("") + "114");
}

TEST(problemB, case3) {
	check(COMMAND, string("") + "5\n" + "11", string("") + "13112221");
}
