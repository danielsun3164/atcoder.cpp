#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "joi2006ho/A";
}

TEST(joi2006ho_problemA, case1) {
	check(
		string("") + "4 6\n" + "1 0 1 0 1 1\n" + "1 1 0 1 0 0\n" + "1 1 1 0 0 0\n" + "1 0 1 0 1 0",
		string("") + "1 3 2 5 4 6");
}
