#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC159/A";
}

TEST(abc159_problemA, case1) {
	check(string("") + "2 1", string("") + "1");
}

TEST(abc159_problemA, case2) {
	check(string("") + "4 3", string("") + "9");
}

TEST(abc159_problemA, case3) {
	check(string("") + "1 1", string("") + "0");
}

TEST(abc159_problemA, case4) {
	check(string("") + "13 3", string("") + "81");
}

TEST(abc159_problemA, case5) {
	check(string("") + "0 3", string("") + "3");
}
