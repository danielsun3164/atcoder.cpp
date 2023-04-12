#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC165/C";
}

TEST(abc165_problemC, case1) {
	check(string("") + "3 4 3\n" + "1 3 3 100\n" + "1 2 2 10\n" + "2 3 2 10", string("") + "110");
}

TEST(abc165_problemC, case2) {
	check(
			string("") + "4 6 10\n" + "2 4 1 86568\n" + "1 4 0 90629\n" + "2 3 0 90310\n" + "3 4 1 29211\n"
					+ "3 4 3 78537\n" + "3 4 2 8580\n" + "1 2 1 96263\n" + "1 4 2 2156\n" + "1 2 0 94325\n"
					+ "1 4 3 94328", string("") + "357500");
}

TEST(abc165_problemC, case3) {
	check(string("") + "10 10 1\n" + "1 10 9 1", string("") + "1");
}
