#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc159_problemE, case1) {
	check(string("") + "3 5 4\n" + "11100\n" + "10001\n" + "00111", string("") + "2");
}

TEST(abc159_problemE, case2) {
	check(string("") + "3 5 8\n" + "11100\n" + "10001\n" + "00111", string("") + "0");
}

TEST(abc159_problemE, case3) {
	check(string("") + "4 10 4\n" + "1110010010\n" + "1000101110\n" + "0011101001\n" + "1101000111", string("") + "3");
}
