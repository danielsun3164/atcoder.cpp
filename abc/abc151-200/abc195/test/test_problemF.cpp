#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "ABC195/F";
}

TEST(abc195_problemF, case1) {
	check(string("") + "2 4", string("") + "6");
}

TEST(abc195_problemF, case2) {
	check(string("") + "1 1", string("") + "2");
}

TEST(abc195_problemF, case3) {
	check(string("") + "123456789000 123456789050", string("") + "2125824");
}
