#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex14";

TEST(ex14, case1) {
	check(PATH + COMMAND, string("") + "160 154 152", string("") + "8");
}

TEST(ex14, case2) {
	check(PATH + COMMAND, string("") + "200 200 200", string("") + "0");
}

TEST(ex14, case3) {
	check(PATH + COMMAND, string("") + "145 1 170", string("") + "169");
}

TEST(ex14, case4) {
	check(PATH + COMMAND, string("") + "150 190 160", string("") + "40");
}
