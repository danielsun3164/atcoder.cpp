#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "ABC151/F";
	TOLERANCE = 1E-6;
}

TEST(abc151_problemF, case1) {
	check_about(string("") + "2\n" + "0 0\n" + "1 0", 0.5);
}

TEST(abc151_problemF, case2) {
	check_about(string("") + "3\n" + "0 0\n" + "0 1\n" + "1 0", 0.707106781186497524);
}

TEST(abc151_problemF, case3) {
	check_about(
			string("") + "10\n" + "10 9\n" + "5 9\n" + "2 0\n" + "0 0\n" + "2 7\n" + "3 3\n" + "2 5\n" + "10 0\n"
					+ "3 7\n" + "1 9", 6.726812023536805158);
}
