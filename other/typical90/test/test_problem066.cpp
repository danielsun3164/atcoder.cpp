#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem066";
	EXTERNAL = "typical90/066";
	TOLERANCE = 1E-7;
}

TEST(typical90_problem066, case1) {
	check_about(string("") + "2\n" + "1 2\n" + "1 2", 0.25);
}

TEST(typical90_problem066, case2) {
	check_about(string("") + "3\n" + "3 3\n" + "1 1\n" + "4 4", 1.0);
}

TEST(typical90_problem066, case3) {
	check_about(string("") + "10\n" + "1 10\n" + "38 40\n" + "8 87\n" + "2 9\n" + "75 100\n" +
					"45 50\n" + "89 92\n" + "27 77\n" + "23 88\n" + "62 81",
				13.696758921226);
}
