#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex15";
}

TEST(apg4b_ex15, case1) {
	check(string("") + "2\n" + "5 7\n" + "4 10\n" + "9 2", string("") + "1848");
}

TEST(apg4b_ex15, case2) {
	check(string("") + "3\n" + "100 100 100\n" + "100 100 100\n" + "100 100 100", string("") + "27000000");
}

TEST(apg4b_ex15, case3) {
	check(string("") + "5\n" + "95 20 74 81 10\n" + "100 50 32 84 31\n" + "0 0 0 0 0", string("") + "0");
}

TEST(apg4b_ex15, case4) {
	check(string("") + "2\n" + "10 0\n" + "0 5\n" + "1 1", string("") + "100");
}
