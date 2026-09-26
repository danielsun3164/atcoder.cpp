#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc242/Ex";
}

TEST(abc242_problemEx, case1) {
	check(string("") + "3 3\n" + "1 1\n" + "1 2\n" + "2 3", string("") + "499122180");
}

TEST(abc242_problemEx, case2) {
	check(string("") + "13 10\n" + "3 5\n" + "5 9\n" + "3 12\n" + "1 13\n" + "9 11\n" + "12 13\n" +
			  "2 4\n" + "9 12\n" + "9 11\n" + "7 11",
		  string("") + "10");
}

TEST(abc242_problemEx, case3) {
	check(string("") + "100 11\n" + "22 43\n" + "84 93\n" + "12 71\n" + "49 56\n" + "8 11\n" +
			  "1 61\n" + "13 80\n" + "26 83\n" + "23 100\n" + "80 85\n" + "9 89",
		  string("") + "499122193");
}
