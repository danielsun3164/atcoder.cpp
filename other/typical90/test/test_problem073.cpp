#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem073";

TEST(typical90_problem073, case1) {
	check(PATH + COMMAND,
			string("") + "7\n" + "b a b a b b a\n" + "2 1\n" + "3 7\n" + "3 2\n" + "3 4\n" + "5 4\n" + "4 6",
			string("") + "4");
}

TEST(typical90_problem073, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "a b\n" + "1 2", string("") + "1");
}

TEST(typical90_problem073, case3) {
	check(PATH + COMMAND,
			string("") + "22\n" + "b a b b a b b b a b a a a a b b a b b a a a\n" + "1 7\n" + "4 14\n" + "12 22\n"
					+ "2 4\n" + "21 17\n" + "3 20\n" + "7 8\n" + "20 14\n" + "15 11\n" + "8 14\n" + "9 12\n" + "17 8\n"
					+ "6 20\n" + "11 20\n" + "18 19\n" + "10 8\n" + "22 20\n" + "13 21\n" + "5 14\n" + "19 20\n"
					+ "16 14", string("") + "16");
}
