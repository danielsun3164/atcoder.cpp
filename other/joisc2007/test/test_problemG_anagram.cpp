#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemG_anagram";
}

TEST(joisc2007_problemG, case1) {
	check(string("") + "HEART", string("") + "55");
}

TEST(joisc2007_problemG, case2) {
	check(string("") + "IOI", string("") + "2");
}
