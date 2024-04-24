#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc223/H";
}

TEST(abc223_problemH, case1) {
	check(string("") + "5 2\n" + "3 1 4 1 5\n" + "1 3 7\n" + "2 5 7", string("") + "Yes\n" + "No");
}

TEST(abc223_problemH, case2) {
	check(
			string("") + "10 10\n" + "8 45 56 9 38 28 33 5 15 19\n" + "10 10 53\n" + "3 8 60\n" + "1 10 29\n"
					+ "5 7 62\n" + "3 7 51\n" + "8 8 52\n" + "1 4 60\n" + "6 8 32\n" + "4 8 58\n" + "5 9 2",
			string("") + "No\n" + "No\n" + "Yes\n" + "No\n" + "Yes\n" + "No\n" + "No\n" + "No\n" + "Yes\n" + "Yes");
}
