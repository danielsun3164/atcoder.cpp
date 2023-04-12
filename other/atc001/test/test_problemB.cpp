#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(atc001_problemB, case1) {
	check(
			string("") + "8 9\n" + "0 1 2\n" + "0 3 2\n" + "1 1 3\n" + "1 1 4\n" + "0 2 4\n" + "1 4 1\n" + "0 4 2\n"
					+ "0 0 0\n" + "1 0 0", string("") + "Yes\n" + "No\n" + "Yes\n" + "Yes");
}
