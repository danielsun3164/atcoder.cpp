#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem001";

TEST(typical90_problem001, case1) {
	check(PATH + COMMAND, string("") + "3 34\n" + "1\n" + "8 13 26", string("") + "13");
}

TEST(typical90_problem001, case2) {
	check(PATH + COMMAND, string("") + "7 45\n" + "2\n" + "7 11 16 20 28 34 38", string("") + "12");
}

TEST(typical90_problem001, case3) {
	check(PATH + COMMAND, string("") + "3 100\n" + "1\n" + "28 54 81", string("") + "46");
}

TEST(typical90_problem001, case4) {
	check(PATH + COMMAND, string("") + "3 100\n" + "2\n" + "28 54 81", string("") + "26");
}

TEST(typical90_problem001, case5) {
	check(PATH + COMMAND,
			string("") + "20 1000\n" + "4\n"
					+ "51 69 102 127 233 295 350 388 417 466 469 523 553 587 720 739 801 855 926 954",
			string("") + "170");
}
