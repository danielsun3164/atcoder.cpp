#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(joi2007yo_problemA, case1) {
	check(string("") + "100 80 70 60\n" + "80 70 80 90", string("") + "320");
}

TEST(joi2007yo_problemA, case2) {
	check(string("") + "100 80 70 60\n" + "80 70 60 100", string("") + "310");
}
