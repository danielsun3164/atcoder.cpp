#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc246/A";
}

TEST(abc246_problemA, case1) {
	check(string("") + "-1 -1\n" + "-1 2\n" + "3 2", string("") + "3 -1");
}

TEST(abc246_problemA, case2) {
	check(string("") + "-60 -40\n" + "-60 -80\n" + "-20 -80", string("") + "-20 -40");
}
