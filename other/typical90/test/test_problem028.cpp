#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem028";

TEST(typical90_problem028, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 1 3 2\n" + "2 1 4 2", string("") + "2\n" + "1");
}

TEST(typical90_problem028, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "1 1 3 4\n" + "3 4 6 5", string("") + "9\n" + "0");
}

TEST(typical90_problem028, case3) {
	check(PATH + COMMAND,
			string("") + "20\n" + "61 98 76 100\n" + "70 99 95 100\n" + "10 64 96 91\n" + "12 37 99 66\n"
					+ "63 93 65 95\n" + "16 18 18 67\n" + "30 47 88 56\n" + "33 6 38 8\n" + "37 19 40 68\n"
					+ "4 56 12 84\n" + "3 16 92 78\n" + "39 24 67 96\n" + "46 1 69 57\n" + "40 34 65 65\n"
					+ "20 38 51 92\n" + "5 32 100 73\n" + "7 33 92 55\n" + "4 46 97 85\n" + "43 18 57 87\n"
					+ "15 29 54 74",
			string("") + "1806\n" + "990\n" + "1013\n" + "1221\n" + "567\n" + "839\n" + "413\n" + "305\n" + "228\n"
					+ "121\n" + "58\n" + "40\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0");
}
