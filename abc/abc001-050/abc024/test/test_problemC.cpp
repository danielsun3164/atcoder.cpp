#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND,
			string("") + "10 10 3\n" + "1 5\n" + "3 6\n" + "7 10\n" + "5 8\n" + "4 4\n" + "1 4\n" + "2 9\n" + "1 3\n"
					+ "1 1\n" + "4 5\n" + "1 6\n" + "2 7\n" + "10 1", string("") + "2\n" + "4\n" + "8");
}

TEST(problemC, case2) {
	check(PATH + COMMAND,
			string("") + "10 10 4\n" + "1 2\n" + "2 4\n" + "3 6\n" + "4 8\n" + "5 10\n" + "9 10\n" + "7 8\n" + "5 6\n"
					+ "3 5\n" + "1 3\n" + "10 1\n" + "3 8\n" + "2 4\n" + "1 3",
			string("") + "10\n" + "4\n" + "2\n" + "2");
}

TEST(problemC, case3) {
	check(PATH + COMMAND,
			string("") + "314159265 10 1\n" + "1 10000\n" + "500 12031\n" + "1414 113232\n" + "111111 777777\n"
					+ "666661 23423423\n" + "12345678 123456789\n" + "111111111 314159265\n" + "112334 235235235\n"
					+ "1 223445\n" + "314 1592\n" + "1 314159265", string("") + "7");
}
