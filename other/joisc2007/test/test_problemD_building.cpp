#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD_building";
	EXTERNAL = "joisc2007/Building";
}

TEST(joisc2007_problemD, case1) {
	check(
		string("") + "9\n" + "3\n" + "7\n" + "5\n" + "9\n" + "8\n" + "10\n" + "10\n" + "11\n" + "9",
		string("") + "5");
}
