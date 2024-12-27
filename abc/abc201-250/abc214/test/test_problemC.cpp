#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc214/C";
}

TEST(abc214_problemC, case1) {
	check(string("") + "3\n" + "4 1 5\n" + "3 10 100", string("") + "3\n" + "7\n" + "8");
}

TEST(abc214_problemC, case2) {
	check(string("") + "4\n" + "100 100 100 100\n" + "1 1 1 1",
		  string("") + "1\n" + "1\n" + "1\n" + "1");
}

TEST(abc214_problemC, case3) {
	check(string("") + "4\n" + "1 2 3 4\n" + "1 2 4 7", string("") + "1\n" + "2\n" + "4\n" + "7");
}

TEST(abc214_problemC, case4) {
	check(string("") + "8\n" + "84 87 78 16 94 36 87 93\n" + "50 22 63 28 91 60 64 27",
		  string("") + "50\n" + "22\n" + "63\n" + "28\n" + "44\n" + "60\n" + "64\n" + "27");
}
