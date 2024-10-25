#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem088";
	EXTERNAL = "ARC107/A";
}

TEST(math_and_algorithm_problem088, case1) {
	check(string("") + "1 2 3", string("") + "18");
}

TEST(math_and_algorithm_problem088, case2) {
	check(string("") + "1000000000 987654321 123456789", string("") + "951633476");
}
