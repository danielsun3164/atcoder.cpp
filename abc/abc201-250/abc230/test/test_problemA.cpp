#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc230/A";
}

TEST(abc230_problemA, case1) {
	check(string("") + "42", string("") + "AGC043");
}

TEST(abc230_problemA, case2) {
	check(string("") + "19", string("") + "AGC019");
}

TEST(abc230_problemA, case3) {
	check(string("") + "1", string("") + "AGC001");
}

TEST(abc230_problemA, case4) {
	check(string("") + "50", string("") + "AGC051");
}
