#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex24";
}

TEST(apg4b_ex24, case1) {
	check(string("") + "0 0 0\n" + "90", string("") + "00:00:00\n" + "00:01:30");
}

TEST(apg4b_ex24, case2) {
	check(string("") + "0 0 0\n" + "-5", string("") + "00:00:00\n" + "23:59:55");
}

TEST(apg4b_ex24, case3) {
	check(string("") + "23 59 30\n" + "30", string("") + "23:59:30\n" + "00:00:00");
}

TEST(apg4b_ex24, case4) {
	check(string("") + "6 57 9\n" + "-4195", string("") + "06:57:09\n" + "05:47:14");
}
