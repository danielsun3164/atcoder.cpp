#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC155/E";
}

TEST(abc155_problemE, case1) {
	check(string("") + "36", string("") + "8");
}

TEST(abc155_problemE, case2) {
	check(string("") + "91", string("") + "3");
}

TEST(abc155_problemE, case3) {
	check(
			string("")
					+ "314159265358979323846264338327950288419716939937551058209749445923078164062862089986280348253421170",
			string("") + "243");
}
