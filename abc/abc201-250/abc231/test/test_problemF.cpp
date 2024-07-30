#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc231/F";
}

TEST(abc231_problemF, case1) {
	check(string("") + "3\n" + "50 100 150\n" + "1 3 2", string("") + "4");
}

TEST(abc231_problemF, case2) {
	check(string("") + "3\n" + "123456789 123456 123\n" + "987 987654 987654321", string("") + "6");
}

TEST(abc231_problemF, case3) {
	check(string("") + "10\n" + "3 1 4 1 5 9 2 6 5 3\n" + "2 7 1 8 2 8 1 8 2 8", string("") + "37");
}
