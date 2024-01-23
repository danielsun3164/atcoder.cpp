#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "abc221/E";
}

TEST(abc221_problemE, case1) {
	check(string("") + "3\n" + "1 2 1", string("") + "3");
}

TEST(abc221_problemE, case2) {
	check(string("") + "3\n" + "1 2 2", string("") + "4");
}

TEST(abc221_problemE, case3) {
	check(string("") + "3\n" + "3 2 1", string("") + "0");
}

TEST(abc221_problemE, case4) {
	check(
			string("") + "10\n"
					+ "198495780 28463047 859606611 212983738 946249513 789612890 782044670 700201033 367981604 302538501",
			string("") + "830");
}
