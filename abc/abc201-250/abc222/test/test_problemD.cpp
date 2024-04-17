#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc222/D";
}

TEST(abc222_problemD, case1) {
	check(string("") + "2\n" + "1 1\n" + "2 3", string("") + "5");
}

TEST(abc222_problemD, case2) {
	check(string("") + "3\n" + "2 2 2\n" + "2 2 2", string("") + "1");
}

TEST(abc222_problemD, case3) {
	check(string("") + "10\n" + "1 2 3 4 5 6 7 8 9 10\n" + "1 4 9 16 25 36 49 64 81 100", string("") + "978222082");
}
