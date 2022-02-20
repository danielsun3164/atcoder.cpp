#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "35\n" + "AT", string("") + "Takahashi");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "12345\n" + "AAAAT", string("") + "Aoki");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "67890\n" + "TTTTA", string("") + "Takahashi");
}

TEST(problemE, case4) {
	check(PATH + COMMAND, string("") + "5\n" + "12345\n" + "ATATA", string("") + "Aoki");
}
