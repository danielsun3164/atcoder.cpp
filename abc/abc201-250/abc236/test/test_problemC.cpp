#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc236/C";
}

TEST(abc236_problemC, case1) {
	check(string("") + "5 3\n" + "tokyo kanda akiba okachi ueno\n" + "tokyo akiba ueno",
		  string("") + "Yes\n" + "No\n" + "Yes\n" + "No\n" + "Yes");
}

TEST(abc236_problemC, case2) {
	check(string("") + "7 7\n" + "a t c o d e r\n" + "a t c o d e r",
		  string("") + "Yes\n" + "Yes\n" + "Yes\n" + "Yes\n" + "Yes\n" + "Yes\n" + "Yes");
}
