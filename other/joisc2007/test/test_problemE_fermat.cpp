#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE_fermat";
}

TEST(joisc2007_problemE, case1) {
	check(string("") + "3\n" + "5", string("") + "9");
}

TEST(joisc2007_problemE, case2) {
	check(string("") + "19\n" + "21", string("") + "487");
}
