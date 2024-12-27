#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC189/D";
}

TEST(abc189_problemD, case1) {
	check(string("") + "2\n" + "AND\n" + "OR", string("") + "5");
}

TEST(abc189_problemD, case2) {
	check(string("") + "5\n" + "OR\n" + "OR\n" + "OR\n" + "OR\n" + "OR", string("") + "63");
}
