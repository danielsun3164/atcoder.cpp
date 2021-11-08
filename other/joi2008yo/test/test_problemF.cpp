#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemF";

TEST(problemE, case1) {
	check(COMMAND,
			string("") + "3 8\n" + "1 3 1 10\n" + "0 2 3\n" + "1 2 3 20\n" + "1 1 2 5\n" + "0 3 2\n" + "1 1 3 7\n"
					+ "1 2 1 9\n" + "0 2 3", string("") + "-1\n" + "15\n" + "12");
}

TEST(problemE, case2) {
	check(COMMAND,
			string("") + "5 16\n" + "1 1 2 343750\n" + "1 1 3 3343\n" + "1 1 4 347392\n" + "1 1 5 5497\n"
					+ "1 2 3 123394\n" + "1 2 4 545492\n" + "1 2 5 458\n" + "1 3 4 343983\n" + "1 3 5 843468\n"
					+ "1 4 5 15934\n" + "0 2 1\n" + "0 4 1\n" + "0 3 2\n" + "0 4 2\n" + "0 4 3\n" + "0 5 3",
			string("") + "5955\n" + "21431\n" + "9298\n" + "16392\n" + "24774\n" + "8840");
}
