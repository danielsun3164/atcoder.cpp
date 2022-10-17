#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc033_problemC, case1) {
	check(PATH + COMMAND, string("") + "0+0+2*0", string("") + "0");
}

TEST(abc033_problemC, case2) {
	check(PATH + COMMAND, string("") + "3*1+1*2", string("") + "2");
}

TEST(abc033_problemC, case3) {
	check(PATH + COMMAND, string("") + "3*1*4+0+2*0+5*2+9*8*6+1+3", string("") + "5");
}
