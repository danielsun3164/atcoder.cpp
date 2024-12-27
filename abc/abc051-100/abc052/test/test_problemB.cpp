#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC067/B";
}

TEST(abc052_problemB, case1) {
	check(string("") + "5\n" + "IIDID", string("") + "2");
}

TEST(abc052_problemB, case2) {
	check(string("") + "7\n" + "DDIDDII", string("") + "0");
}
