#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc198_problemD, case1) {
	check(PATH + COMMAND, string("") + "a\n" + "b\n" + "c", string("") + "1\n" + "2\n" + "3");
}

TEST(abc198_problemD, case2) {
	check(PATH + COMMAND, string("") + "x\n" + "x\n" + "y", string("") + "1\n" + "1\n" + "2");
}

TEST(abc198_problemD, case3) {
	check(PATH + COMMAND, string("") + "p\n" + "q\n" + "p", string("") + "UNSOLVABLE");
}

TEST(abc198_problemD, case4) {
	check(PATH + COMMAND, string("") + "abcd\n" + "efgh\n" + "ijkl", string("") + "UNSOLVABLE");
}

TEST(abc198_problemD, case5) {
	check(PATH + COMMAND, string("") + "send\n" + "more\n" + "money", string("") + "9567\n" + "1085\n" + "10652");
}
