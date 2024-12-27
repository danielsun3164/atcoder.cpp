#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex16";
}

TEST(apg4b_ex16, case1) {
	check(string("") + "5 3 3 1 4", string("") + "YES");
}

TEST(apg4b_ex16, case2) {
	check(string("") + "1 1 2 3 4", string("") + "YES");
}

TEST(apg4b_ex16, case3) {
	check(string("") + "1 2 1 2 1", string("") + "NO");
}

TEST(apg4b_ex16, case4) {
	check(string("") + "100 100 100 100 100", string("") + "YES");
}
