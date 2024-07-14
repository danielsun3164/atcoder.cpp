#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem042";
	EXTERNAL = "typical90/042";
}

TEST(typical90_problem042, case1) {
	check(string("") + "1", string("") + "0");
}

TEST(typical90_problem042, case2) {
	check(string("") + "234", string("") + "757186539");
}
