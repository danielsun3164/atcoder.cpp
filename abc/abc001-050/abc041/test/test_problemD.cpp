#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block { COMMAND = "problemD"; }

TEST(abc041_problemD, case1) {
	check(string("") + "3 2\n" + "2 1\n" + "2 3", string("") + "2");
}

TEST(abc041_problemD, case2) {
	check(string("") + "5 5\n" + "1 2\n" + "2 3\n" + "3 5\n" + "1 4\n" + "4 5",
		  string("") + "3");
}

TEST(abc041_problemD, case3) {
	check(string("") + "16 1\n" + "1 2", string("") + "10461394944000");
}
