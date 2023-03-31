#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemE";
}

TEST(joi2007yo_problemE, case1) {
	check(string("") + "2 2 2\n" + "4\n" + "2 4 5 0\n" + "2 3 6 0\n" + "1 4 5 0\n" + "2 3 5 1",
			string("") + "2\n" + "1\n" + "1\n" + "0\n" + "1\n" + "0");
}
