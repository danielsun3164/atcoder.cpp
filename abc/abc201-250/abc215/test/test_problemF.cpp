#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "0 3\n" + "3 1\n" + "4 10", string("") + "4");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "0 1\n" + "0 4\n" + "0 10\n" + "0 6", string("") + "0");
}

TEST(problemF, case3) {
	check(PATH + COMMAND,
			string("") + "8\n" + "897 729\n" + "802 969\n" + "765 184\n" + "992 887\n" + "1 104\n" + "521 641\n"
					+ "220 909\n" + "380 378", string("") + "801");
}
