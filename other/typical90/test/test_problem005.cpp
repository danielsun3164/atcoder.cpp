#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem005";
	EXTERNAL = "typical90/005";
}

TEST(typical90_problem005, case1) {
	check(string("") + "3 7 3\n" + "1 4 9", string("") + "3");
}

TEST(typical90_problem005, case2) {
	check(string("") + "5 2 3\n" + "1 4 9", string("") + "81");
}

TEST(typical90_problem005, case3) {
	check(string("") + "10000 27 7\n" + "1 3 4 6 7 8 9", string("") + "989112238");
}

TEST(typical90_problem005, case4) {
	check(string("") + "1000000000000000000 29 6\n" + "1 2 4 5 7 9", string("") + "853993813");
}

TEST(typical90_problem005, case5) {
	check(string("") + "1000000000000000000 957 7\n" + "1 2 3 5 6 7 9", string("") + "205384995");
}
