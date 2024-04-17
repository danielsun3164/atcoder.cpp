#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc222/F";
}

TEST(abc222_problemF, case1) {
	check(string("") + "3\n" + "1 2 2\n" + "2 3 3\n" + "1 2 3", string("") + "8\n" + "6\n" + "6");
}

TEST(abc222_problemF, case2) {
	check(string("") + "6\n" + "1 2 3\n" + "1 3 1\n" + "1 4 4\n" + "1 5 1\n" + "1 6 5\n" + "9 2 6 5 3 100",
			string("") + "105\n" + "108\n" + "106\n" + "109\n" + "106\n" + "14");
}

TEST(abc222_problemF, case3) {
	check(
			string("") + "6\n" + "1 2 1000000000\n" + "2 3 1000000000\n" + "3 4 1000000000\n" + "4 5 1000000000\n"
					+ "5 6 1000000000\n" + "1 2 3 4 5 6",
			string("") + "5000000006\n" + "4000000006\n" + "3000000006\n" + "3000000001\n" + "4000000001\n"
					+ "5000000001");
}
