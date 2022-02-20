#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "2 6\n" + "1 2 4\n" + "2 2 4", string("") + "10");
}

TEST(problemD, case2) {
	check(PATH + COMMAND,
			string("") + "5 1000000000\n" + "583563238 820642330 44577\n" + "136809000 653199778 90962\n"
					+ "54601291 785892285 50554\n" + "5797762 453599267 65697\n" + "468677897 916692569 87409",
			string("") + "163089627821228");
}

TEST(problemD, case3) {
	check(PATH + COMMAND,
			string("") + "5 100000\n" + "583563238 820642330 44577\n" + "136809000 653199778 90962\n"
					+ "54601291 785892285 50554\n" + "5797762 453599267 65697\n" + "468677897 916692569 87409",
			string("") + "88206004785464");
}
