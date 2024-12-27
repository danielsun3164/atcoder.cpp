#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC068/B";
}

TEST(abc053_problemB, case1) {
	check(string("") + "QWERTYASDFZXCV", string("") + "5");
}

TEST(abc053_problemB, case2) {
	check(string("") + "ZABCZ", string("") + "4");
}

TEST(abc053_problemB, case3) {
	check(string("") + "HASFJGHOGAKZZFEGA", string("") + "12");
}
