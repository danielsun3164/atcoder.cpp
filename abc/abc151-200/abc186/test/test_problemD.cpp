#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "ABC186/D";
}

TEST(abc186_problemD, case1) {
	check(string("") + "3\n" + "5 1 2", string("") + "8");
}

TEST(abc186_problemD, case2) {
	check(string("") + "5\n" + "31 41 59 26 53", string("") + "176");
}
