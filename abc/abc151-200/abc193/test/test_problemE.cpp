#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC193/E";
}

TEST(abc193_problemE, case1) {
	check(string("") + "3\n" + "5 2 7 6\n" + "1 1 3 1\n" + "999999999 1 1000000000 1",
			string("") + "20\n" + "infinity\n" + "1000000000999999999");
}
