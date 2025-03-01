#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ZONe2021/E";
}

TEST(zone2021_problemE, case1) {
	check(string("") + "3 3\n" + "10 1\n" + "10 10\n" + "1 10\n" + "1 10 1\n" + "1 10 1",
		  string("") + "9");
}

TEST(zone2021_problemE, case2) {
	check(string("") + "7 11\n" + "42 77 94 76 40 66 43 28 66 23\n" +
			  "27 34 41 31 83 13 64 69 81 82\n" + "23 81 0 22 39 51 4 37 84 43\n" +
			  "62 37 82 86 26 67 45 78 85 2\n" + "79 18 72 62 68 84 69 88 19 48\n" +
			  "0 27 21 51 71 13 87 45 39 11\n" + "74 57 32 0 97 41 87 96 17 98\n" +
			  "69 58 76 32 51 16 38 68 86 82 64\n" + "53 47 33 7 51 75 43 14 96 86 70\n" +
			  "80 58 12 76 94 50 59 2 1 54 25\n" + "14 14 62 28 12 43 15 70 65 44 41\n" +
			  "56 50 50 54 53 34 16 3 2 59 88\n" + "27 85 50 79 48 86 27 81 78 78 64",
		  string("") + "498");
}

TEST(zone2021_problemE, case3) {
	check(string("") + "4 4\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0\n" + "0 0 0 0\n" +
			  "0 0 0 0\n" + "0 0 0 0",
		  string("") + "0");
}
