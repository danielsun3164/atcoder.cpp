#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc009_problemB, case1) {
	check(string("") + "4\n" + "100\n" + "200\n" + "300\n" + "300", string("") + "200");
}

TEST(abc009_problemB, case2) {
	check(string("") + "5\n" + "50\n" + "370\n" + "819\n" + "433\n" + "120", string("") + "433");
}

TEST(abc009_problemB, case3) {
	check(string("") + "6\n" + "100\n" + "100\n" + "100\n" + "200\n" + "200\n" + "200",
		  string("") + "100");
}
