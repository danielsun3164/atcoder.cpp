#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC164/C";
}

TEST(abc164_problemC, case1) {
	check(string("") + "3\n" + "apple\n" + "orange\n" + "apple", string("") + "2");
}

TEST(abc164_problemC, case2) {
	check(string("") + "5\n" + "grape\n" + "grape\n" + "grape\n" + "grape\n" + "grape",
		  string("") + "1");
}

TEST(abc164_problemC, case3) {
	check(string("") + "4\n" + "aaaa\n" + "a\n" + "aaa\n" + "aa", string("") + "4");
}
