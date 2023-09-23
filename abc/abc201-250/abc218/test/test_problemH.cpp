#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc218/H";
}

TEST(abc218_problemH, case1) {
	check(string("") + "6 2\n" + "3 1 4 1 5", string("") + "11");
}

TEST(abc218_problemH, case2) {
	check(string("") + "7 6\n" + "2 7 1 8 2 8", string("") + "10");
}

TEST(abc218_problemH, case3) {
	check(string("") + "11 7\n" + "12345 678 90123 45678901 234567 89012 3456 78901 23456 7890",
			string("") + "46207983");
}
