#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC187/B";
}

TEST(abc187_problemB, case1) {
	check(string("") + "3\n" + "0 0\n" + "1 2\n" + "2 1", string("") + "2");
}

TEST(abc187_problemB, case2) {
	check(string("") + "1\n" + "-691 273", string("") + "0");
}

TEST(abc187_problemB, case3) {
	check(
			string("") + "10\n" + "-31 -35\n" + "8 -36\n" + "22 64\n" + "5 73\n" + "-14 8\n" + "18 -58\n" + "-41 -85\n"
					+ "1 -88\n" + "-21 -85\n" + "-11 82", string("") + "11");
}
