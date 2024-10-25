#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem102";
	EXTERNAL = "ARC117/C";
}

TEST(math_and_algorithm_problem102, case1) {
	check(string("") + "3\n" + "BWR", string("") + "W");
}

TEST(math_and_algorithm_problem102, case2) {
	check(string("") + "4\n" + "RRBB", string("") + "W");
}

TEST(math_and_algorithm_problem102, case3) {
	check(string("") + "6\n" + "BWWRBW", string("") + "B");
}

TEST(math_and_algorithm_problem102, case4) {
	check(string("") + "8\n" + "WWBRBBWB", string("") + "R");
}

TEST(math_and_algorithm_problem102, case5) {
	check(string("") + "21\n" + "BWBRRBBRWBRBBBRRBWWWR", string("") + "B");
}
