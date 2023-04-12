#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc200/F";
}

TEST(abc200_problemF, case1) {
	check(string("") + "101\n" + "2", string("") + "2");
}

TEST(abc200_problemF, case2) {
	check(string("") + "?0?\n" + "1", string("") + "3");
}

TEST(abc200_problemF, case3) {
	check(string("") + "10111?10??1101??1?00?1?01??00010?0?1??\n" + "998244353", string("") + "235562598");
}

TEST(abc200_problemF, case4) {
	check(string("") + "?\n" + "1", string("") + "0");
}
