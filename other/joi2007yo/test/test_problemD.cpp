#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "joi2007yo/D";
}

TEST(joi2007yo_problemD, case1) {
	check(string("") + "2\n" + "2\n" + "1\n" + "0", string("") + "2\n" + "4\n" + "3\n" + "1");
}

TEST(joi2007yo_problemD, case2) {
	check(string("") + "3\n" + "4\n" + "2\n" + "4\n" + "0\n" + "0",
		  string("") + "1\n" + "5\n" + "4\n" + "3\n" + "2\n" + "6");
}
