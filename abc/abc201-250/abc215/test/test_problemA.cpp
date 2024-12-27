#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc215/A";
}

TEST(abc215_problemA, case1) {
	check(string("") + "Hello,World!", string("") + "AC");
}

TEST(abc215_problemA, case2) {
	check(string("") + "Hello,world!", string("") + "WA");
}

TEST(abc215_problemA, case3) {
	check(string("") + "Hello!World!", string("") + "WA");
}
