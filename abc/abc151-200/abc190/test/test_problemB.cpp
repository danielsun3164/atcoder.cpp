#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc190_problemB, case1) {
	check(string("") + "4 9 9\n" + "5 5\n" + "15 5\n" + "5 15\n" + "15 15", string("") + "Yes");
}

TEST(abc190_problemB, case2) {
	check(string("") + "3 691 273\n" + "691 997\n" + "593 273\n" + "691 273", string("") + "No");
}

TEST(abc190_problemB, case3) {
	check(
			string("") + "7 100 100\n" + "10 11\n" + "12 67\n" + "192 79\n" + "154 197\n" + "142 158\n" + "20 25\n"
					+ "17 108", string("") + "Yes");
}
