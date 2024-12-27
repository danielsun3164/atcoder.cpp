#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc209/C";
}

TEST(abc209_problemC, case1) {
	check(string("") + "2\n" + "1 3", string("") + "2");
}

TEST(abc209_problemC, case2) {
	check(string("") + "4\n" + "3 3 4 4", string("") + "12");
}

TEST(abc209_problemC, case3) {
	check(string("") + "2\n" + "1 1", string("") + "0");
}

TEST(abc209_problemC, case4) {
	check(string("") + "10\n" +
			  "999999917 999999914 999999923 999999985 999999907 999999965 999999914 999999908 "
			  "999999951 999999979",
		  string("") + "405924645");
}
