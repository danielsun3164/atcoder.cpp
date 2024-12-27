#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc234/Ex";
}

TEST(abc234_problemEx, case1) {
	check(string("") + "6 5\n" + "2 0\n" + "2 2\n" + "3 4\n" + "0 0\n" + "5 5\n" + "8 3",
		  string("") + "9\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "2 5\n" + "3 4\n" +
			  "3 5\n" + "5 6");
}

TEST(abc234_problemEx, case2) {
	check(string("") + "2 1414213562\n" + "0 0\n" + "1000000000 1000000000", string("") + "0");
}

TEST(abc234_problemEx, case3) {
	check(string("") + "10 150\n" + "300 300\n" + "300 400\n" + "300 500\n" + "400 300\n" +
			  "400 400\n" + "400 400\n" + "400 500\n" + "500 300\n" + "500 400\n" + "500 500",
		  string("") + "29\n" + "1 2\n" + "1 4\n" + "1 5\n" + "1 6\n" + "2 3\n" + "2 4\n" +
			  "2 5\n" + "2 6\n" + "2 7\n" + "3 5\n" + "3 6\n" + "3 7\n" + "4 5\n" + "4 6\n" +
			  "4 8\n" + "4 9\n" + "5 6\n" + "5 7\n" + "5 8\n" + "5 9\n" + "5 10\n" + "6 7\n" +
			  "6 8\n" + "6 9\n" + "6 10\n" + "7 9\n" + "7 10\n" + "8 9\n" + "9 10");
}
