#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem048";
}

TEST(typical90_problem048, case1) {
	check(string("") + "4 3\n" + "4 3\n" + "9 5\n" + "15 8\n" + "8 6", string("") + "21");
}

TEST(typical90_problem048, case2) {
	check(string("") + "2 2\n" + "7 6\n" + "3 2", string("") + "8");
}

TEST(typical90_problem048, case3) {
	check(
			string("") + "10 12\n" + "987753612 748826789\n" + "36950727 36005047\n" + "961239509 808587458\n"
					+ "905633062 623962559\n" + "940964276 685396947\n" + "959540552 928301562\n"
					+ "60467784 37828572\n" + "953685176 482123245\n" + "87983282 66762644\n" + "912605260 709048491",
			string("") + "6437530406");
}
