#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem052";
	EXTERNAL = "typical90/052";
}

TEST(typical90_problem052, case1) {
	check(string("") + "2\n" + "1 2 3 5 7 11\n" + "4 6 8 9 10 12", string("") + "1421");
}

TEST(typical90_problem052, case2) {
	check(string("") + "1\n" + "11 13 17 19 23 29", string("") + "112");
}

TEST(typical90_problem052, case3) {
	check(string("") + "7\n" + "19 23 51 59 91 99\n" + "15 45 56 65 69 94\n" +
			  "7 11 16 34 59 95\n" + "27 30 40 43 83 85\n" + "19 23 25 27 45 99\n" +
			  "27 48 52 53 60 81\n" + "21 36 49 72 82 84",
		  string("") + "670838273");
}
