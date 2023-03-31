#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc164_problemD, case1) {
	check(string("") + "1817181712114", string("") + "3");
}

TEST(abc164_problemD, case2) {
	check(string("") + "14282668646", string("") + "2");
}

TEST(abc164_problemD, case3) {
	check(string("") + "2119", string("") + "0");
}
