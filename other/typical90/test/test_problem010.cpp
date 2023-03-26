#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem010";

TEST(typical90_problem010, case1) {
	check(PATH + COMMAND,
			string("") + "7\n" + "1 72\n" + "2 78\n" + "2 94\n" + "1 23\n" + "2 89\n" + "1 40\n" + "1 75\n" + "1\n"
					+ "2 6", string("") + "63 261");
}

TEST(typical90_problem010, case2) {
	check(PATH + COMMAND,
			string("") + "7\n" + "1 72\n" + "2 78\n" + "2 94\n" + "1 23\n" + "2 89\n" + "1 40\n" + "1 75\n" + "10\n"
					+ "1 3\n" + "2 4\n" + "3 5\n" + "4 6\n" + "5 7\n" + "1 5\n" + "2 6\n" + "3 7\n" + "1 6\n" + "2 7",
			string("") + "72 172\n" + "23 172\n" + "23 183\n" + "63 89\n" + "115 89\n" + "95 261\n" + "63 261\n"
					+ "138 183\n" + "135 261\n" + "138 261");
}

TEST(typical90_problem010, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "1 100\n" + "3\n" + "1 1\n" + "1 1\n" + "1 1",
			string("") + "100 0\n" + "100 0\n" + "100 0");
}

TEST(typical90_problem010, case4) {
	check(PATH + COMMAND,
			string("") + "20\n" + "2 90\n" + "1 67\n" + "2 9\n" + "2 17\n" + "2 85\n" + "2 43\n" + "2 11\n" + "1 32\n"
					+ "2 16\n" + "1 19\n" + "2 65\n" + "1 14\n" + "1 51\n" + "2 94\n" + "1 4\n" + "1 55\n" + "2 90\n"
					+ "1 89\n" + "1 35\n" + "2 81\n" + "20\n" + "3 17\n" + "5 5\n" + "11 11\n" + "8 10\n" + "3 13\n"
					+ "2 6\n" + "3 7\n" + "3 5\n" + "12 18\n" + "4 8\n" + "3 16\n" + "6 8\n" + "3 20\n" + "1 12\n"
					+ "1 6\n" + "5 16\n" + "3 10\n" + "17 19\n" + "4 4\n" + "7 15",
			string("") + "175 430\n" + "0 85\n" + "0 65\n" + "51 16\n" + "116 246\n" + "67 154\n" + "0 165\n"
					+ "0 111\n" + "213 184\n" + "32 156\n" + "175 340\n" + "32 54\n" + "299 511\n" + "132 336\n"
					+ "67 244\n" + "175 314\n" + "51 181\n" + "124 90\n" + "0 17\n" + "120 186");
}
