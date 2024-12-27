#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem085";
	EXTERNAL = "typical90/085";
}

TEST(typical90_problem085, case1) {
	check(string("") + "42", string("") + "5");
}

TEST(typical90_problem085, case2) {
	check(string("") + "7", string("") + "1");
}

TEST(typical90_problem085, case3) {
	check(string("") + "192", string("") + "16");
}
