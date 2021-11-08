#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemE";

TEST(problemE, case1) {
	check(COMMAND, string("") + "5 1\n" + "0 0 3 2\n" + "1 1 2 5\n" + "0 4 6 5\n" + "3 3 5 6\n" + "5 0 7 6",
			string("") + "29");
}

TEST(problemE, case2) {
	check(COMMAND, string("") + "5 2\n" + "0 0 3 2\n" + "1 1 2 5\n" + "0 4 6 5\n" + "3 3 5 6\n" + "5 0 7 6",
			string("") + "29\n" + "38");
}

TEST(problemE, case3) {
	check(COMMAND, string("") + "2 2\n" + "0 0 8 9\n" + "0 0 9 8", string("") + "80\n" + "36");
}

TEST(problemE, case4) {
	check(COMMAND, string("") + "3 2\n" + "2 2 8 8\n" + "3 0 4 9\n" + "5 0 7 9", string("") + "45\n" + "36");
}
