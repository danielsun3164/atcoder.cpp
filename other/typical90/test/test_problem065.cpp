#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem065";

TEST(typical90_problem065, case1) {
	check(PATH + COMMAND, string("") + "3 1 2 5\n" + "4 2 4", string("") + "2");
}

TEST(typical90_problem065, case2) {
	check(PATH + COMMAND, string("") + "65 6 12 35\n" + "30 18 35", string("") + "257190020");
}

TEST(typical90_problem065, case3) {
	check(PATH + COMMAND, string("") + "23502 65936 72385 95835\n" + "72759 85735 72385", string("") + "229429276");
}
