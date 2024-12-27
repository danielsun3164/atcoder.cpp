#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem082";
}

TEST(math_and_algorithm_problem082, case1) {
	check(string("") + "3\n" + "123 86399\n" + "1 86400\n" + "86399 86400", string("") + "2");
}
