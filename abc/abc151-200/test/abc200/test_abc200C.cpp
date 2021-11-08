#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc200C";

TEST(abc200C, case1) {
	check(COMMAND, string("") + "6\n" + "123 223 123 523 200 2000", string("") + "4");
}

TEST(abc200C, case2) {
	check(COMMAND, string("") + "5\n" + "1 2 3 4 5", string("") + "0");
}

TEST(abc200C, case3) {
	check(COMMAND, string("") + "8\n" + "199 100 200 400 300 500 600 200", string("") + "9");
}
