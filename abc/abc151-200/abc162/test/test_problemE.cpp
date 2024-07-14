#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC162/E";
}

TEST(abc162_problemE, case1) {
	check(string("") + "3 2", string("") + "9");
}

TEST(abc162_problemE, case2) {
	check(string("") + "3 200", string("") + "10813692");
}

TEST(abc162_problemE, case3) {
	check(string("") + "100000 100000", string("") + "742202979");
}
