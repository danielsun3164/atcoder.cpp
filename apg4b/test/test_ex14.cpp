#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex14";
}

TEST(apg4b_ex14, case1) {
	check(string("") + "160 154 152", string("") + "8");
}

TEST(apg4b_ex14, case2) {
	check(string("") + "200 200 200", string("") + "0");
}

TEST(apg4b_ex14, case3) {
	check(string("") + "145 1 170", string("") + "169");
}

TEST(apg4b_ex14, case4) {
	check(string("") + "150 190 160", string("") + "40");
}
