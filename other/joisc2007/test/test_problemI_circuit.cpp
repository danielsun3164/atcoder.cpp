#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemI_circuit";

TEST(problemI, case1) {
	check(PATH + COMMAND, string("") + "3 5\n" + "3\n" + "1\n" + "2", string("") + "2\n" + "3\n" + "1");
}

TEST(problemI, case2) {
	check(PATH + COMMAND, string("") + "4 4\n" + "2\n" + "1\n" + "4\n" + "3", string("") + "0");
}
