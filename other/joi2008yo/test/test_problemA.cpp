#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(joi2008yo_problemA, case1) {
	check(PATH + COMMAND, string("") + "380", string("") + "4");
}

TEST(joi2008yo_problemA, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "15");
}
