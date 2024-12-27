#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD別回答";
	EXTERNAL = "ARC068/D";
}

TEST(abc053_problemD別回答, case1) {
	check(string("") + "5\n" + "1 2 1 3 7", string("") + "3");
}

TEST(abc053_problemD別回答, case2) {
	check(string("") + "15\n" + "1 3 5 2 1 3 2 8 8 6 2 6 11 1 1", string("") + "7");
}
