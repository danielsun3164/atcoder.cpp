#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "joi2006ho/E";
}

TEST(joi2006ho_problemE, case1) {
	check(string("") + "5 1\n" + "0 0 3 2\n" + "1 1 2 5\n" + "0 4 6 5\n" + "3 3 5 6\n" + "5 0 7 6",
		  string("") + "29");
}

TEST(joi2006ho_problemE, case2) {
	check(string("") + "5 2\n" + "0 0 3 2\n" + "1 1 2 5\n" + "0 4 6 5\n" + "3 3 5 6\n" + "5 0 7 6",
		  string("") + "29\n" + "38");
}

TEST(joi2006ho_problemE, case3) {
	check(string("") + "2 2\n" + "0 0 8 9\n" + "0 0 9 8", string("") + "80\n" + "36");
}

TEST(joi2006ho_problemE, case4) {
	check(string("") + "3 2\n" + "2 2 8 8\n" + "3 0 4 9\n" + "5 0 7 9", string("") + "45\n" + "36");
}
