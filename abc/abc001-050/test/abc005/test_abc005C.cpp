#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc005C";

TEST(abc005C, case1) {
	check(COMMAND, string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "2 3 4", string("") + "yes");
}

TEST(abc005C, case2) {
	check(COMMAND, string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "2 3 5", string("") + "no");
}

TEST(abc005C, case3) {
	check(COMMAND, string("") + "1\n" + "3\n" + "1 2 3\n" + "10\n" + "1 2 3 4 5 6 7 8 9 10", string("") + "no");
}

TEST(abc005C, case4) {
	check(COMMAND, string("") + "1\n" + "3\n" + "1 2 3\n" + "3\n" + "1 2 2", string("") + "no");
}

TEST(abc005C, case5) {
	check(COMMAND, string("") + "2\n" + "5\n" + "1 3 6 10 15\n" + "3\n" + "4 8 16", string("") + "yes");
}
