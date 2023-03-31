#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(loadchecking_problemA, case1) {
	check(string(""),
			string("") + "2\n" + "20\n" + "19\n" + "10\n" + "17\n" + "12\n" + "9\n" + "13\n" + "14\n" + "15\n" + "4\n"
					+ "8\n" + "3\n" + "16\n" + "11\n" + "18\n" + "7\n" + "5\n" + "1\n" + "6");
}
