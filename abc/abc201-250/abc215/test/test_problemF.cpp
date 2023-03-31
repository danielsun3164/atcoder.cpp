#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc215_problemF, case1) {
	check(string("") + "3\n" + "0 3\n" + "3 1\n" + "4 10", string("") + "4");
}

TEST(abc215_problemF, case2) {
	check(string("") + "4\n" + "0 1\n" + "0 4\n" + "0 10\n" + "0 6", string("") + "0");
}

TEST(abc215_problemF, case3) {
	check(
			string("") + "8\n" + "897 729\n" + "802 969\n" + "765 184\n" + "992 887\n" + "1 104\n" + "521 641\n"
					+ "220 909\n" + "380 378", string("") + "801");
}
