#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc203/F";
}

TEST(abc203_problemF, case1) {
	check(string("") + "4 1\n" + "2 3 4 9", string("") + "2 1");
}

TEST(abc203_problemF, case2) {
	check(string("") + "3 3\n" + "2 3 5", string("") + "0 3");
}

TEST(abc203_problemF, case3) {
	check(string("") + "9 8\n" + "137 55 56 60 27 28 133 56 55", string("") + "1 4");
}
