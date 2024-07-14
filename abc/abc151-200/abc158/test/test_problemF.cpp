#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC158/F";
}

TEST(abc158_problemF, case1) {
	check(string("") + "2\n" + "1 5\n" + "3 3", string("") + "3");
}

TEST(abc158_problemF, case2) {
	check(string("") + "3\n" + "6 5\n" + "-1 10\n" + "3 3", string("") + "5");
}

TEST(abc158_problemF, case3) {
	check(string("") + "4\n" + "7 10\n" + "-10 3\n" + "4 3\n" + "-4 3", string("") + "16");
}

TEST(abc158_problemF, case4) {
	check(string("") + "20\n" + "-8 1\n" + "26 4\n" + "0 5\n" + "9 1\n" + "19 4\n" + "22 20\n" +
			  "28 27\n" + "11 8\n" + "-3 20\n" + "-25 17\n" + "10 4\n" + "-18 27\n" + "24 28\n" +
			  "-11 19\n" + "2 27\n" + "-2 18\n" + "-1 12\n" + "-24 29\n" + "31 29\n" + "29 7",
		  string("") + "110");
}
