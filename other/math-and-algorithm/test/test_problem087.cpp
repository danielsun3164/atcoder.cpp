#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem087";
}

TEST(math_and_algorithm_problem087, case1) {
	check(string("") + "2", string("") + "9");
}

TEST(math_and_algorithm_problem087, case2) {
	check(string("") + "869120", string("") + "497335961");
}
