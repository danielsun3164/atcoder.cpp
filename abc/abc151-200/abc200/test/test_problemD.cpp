#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc200/D";
}

TEST(abc200_problemD, case1) {
	check(string("") + "5\n" + "180 186 189 191 218", string("") + "Yes\n" + "1 1\n" + "2 3 4");
}

TEST(abc200_problemD, case2) {
	check(string("") + "2\n" + "123 523", string("") + "Yes\n" + "1 1\n" + "1 2");
}

TEST(abc200_problemD, case3) {
	check(string("") + "6\n" + "2013 1012 2765 2021 508 6971", string("") + "No");
}
