#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem065";
	EXTERNAL = "typical90/065";
}

TEST(typical90_problem065, case1) {
	check(string("") + "3 1 2 5\n" + "4 2 4", string("") + "2");
}

TEST(typical90_problem065, case2) {
	check(string("") + "65 6 12 35\n" + "30 18 35", string("") + "257190020");
}

TEST(typical90_problem065, case3) {
	check(string("") + "23502 65936 72385 95835\n" + "72759 85735 72385", string("") + "229429276");
}
