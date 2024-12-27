#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC067/C";
}

TEST(abc052_problemC, case1) {
	check(string("") + "3", string("") + "4");
}

TEST(abc052_problemC, case2) {
	check(string("") + "6", string("") + "30");
}

TEST(abc052_problemC, case3) {
	check(string("") + "1000", string("") + "972926972");
}
