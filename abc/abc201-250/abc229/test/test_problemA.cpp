#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc229/A";
}

TEST(abc229_problemA, case1) {
	check(string("") + "##\n" + ".#", string("") + "Yes");
}

TEST(abc229_problemA, case2) {
	check(string("") + ".#\n" + "#.", string("") + "No");
}
