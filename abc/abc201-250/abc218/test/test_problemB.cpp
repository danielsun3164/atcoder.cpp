#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc218/B";
}

TEST(abc218_problemB, case1) {
	check(string("") + "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26",
		  string("") + "abcdefghijklmnopqrstuvwxyz");
}

TEST(abc218_problemB, case2) {
	check(string("") + "2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26",
		  string("") + "bacdefghijklmnopqrstuvwxyz");
}

TEST(abc218_problemB, case3) {
	check(string("") + "5 11 12 16 25 17 18 1 7 10 4 23 20 3 2 24 26 19 14 9 6 22 8 13 15 21",
		  string("") + "eklpyqragjdwtcbxzsnifvhmou");
}
