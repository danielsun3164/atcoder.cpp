#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc155E";

TEST(abc155E, case1) {
	check(PATH + COMMAND, string("") + "36", string("") + "8");
}

TEST(abc155E, case2) {
	check(PATH + COMMAND, string("") + "91", string("") + "3");
}

TEST(abc155E, case3) {
	check(PATH + COMMAND,
			string("")
					+ "314159265358979323846264338327950288419716939937551058209749445923078164062862089986280348253421170",
			string("") + "243");
}
