#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 5 4\n" + "11100\n" + "10001\n" + "00111", string("") + "2");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 5 8\n" + "11100\n" + "10001\n" + "00111", string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "4 10 4\n" + "1110010010\n" + "1000101110\n" + "0011101001\n" + "1101000111",
			string("") + "3");
}
