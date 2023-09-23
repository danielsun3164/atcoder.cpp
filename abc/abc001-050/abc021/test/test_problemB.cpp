#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc021_problemB, case1) {
	check(string("") + "5\n" + "1 5\n" + "3\n" + "3 4 2", string("") + "YES");
}

TEST(abc021_problemB, case2) {
	check(string("") + "7\n" + "1 3\n" + "4\n" + "2 4 2 7", string("") + "NO");
}

TEST(abc021_problemB, case3) {
	check(string("") + "4\n" + "1 4\n" + "3\n" + "2 1 3", string("") + "NO");
}

TEST(abc021_problemB, case4) {
	check(string("") + "4\n" + "1 4\n" + "3\n" + "2 4 3", string("") + "NO");
}

TEST(abc021_problemB, case5) {
	check(string("") + "20\n" + "1 4\n" + "12\n" + "2 3 5 7 8 9 10 11 12 15 13 14", string("") + "YES");
}
