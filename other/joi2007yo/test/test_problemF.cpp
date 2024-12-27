#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "joi2007yo/F";
}

TEST(joi2007yo_problemE, case1) {
	check(string("") + "5 4\n" + "3\n" + "2 2\n" + "2 3\n" + "4 2", string("") + "5");
}
