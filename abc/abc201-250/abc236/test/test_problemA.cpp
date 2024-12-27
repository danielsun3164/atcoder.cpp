#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc236/A";
}

TEST(abc236_problemA, case1) {
	check(string("") + "chokudai\n" + "3 5", string("") + "chukodai");
}

TEST(abc236_problemA, case2) {
	check(string("") + "aa\n" + "1 2", string("") + "aa");
}

TEST(abc236_problemA, case3) {
	check(string("") + "aaaabbbb\n" + "1 8", string("") + "baaabbba");
}
