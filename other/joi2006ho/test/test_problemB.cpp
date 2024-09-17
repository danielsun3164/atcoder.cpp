#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "joi2006ho/B";
}

TEST(joi2006ho_problemB, case1) {
	check(string("") + "1\n" + "122244", string("") + "113224");
}

TEST(joi2006ho_problemB, case2) {
	check(string("") + "1\n" + "44444444444", string("") + "114");
}

TEST(joi2006ho_problemB, case3) {
	check(string("") + "5\n" + "11", string("") + "13112221");
}
