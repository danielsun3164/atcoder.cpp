#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc218/A";
}

TEST(abc218_problemA, case1) {
	check(string("") + "4\n" + "oooxoox", string("") + "No");
}

TEST(abc218_problemA, case2) {
	check(string("") + "7\n" + "ooooooo", string("") + "Yes");
}
