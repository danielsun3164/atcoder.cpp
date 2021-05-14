#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc187B";

TEST(abc187B, case1) {
	check(COMMAND, string("") + "3\n" + "0 0\n" + "1 2\n" + "2 1", string("") + "2");
}

TEST(abc187B, case2) {
	check(COMMAND, string("") + "1\n" + "-691 273", string("") + "0");
}

TEST(abc187B, case3) {
	check(COMMAND,
			string("") + "10\n" + "-31 -35\n" + "8 -36\n" + "22 64\n" + "5 73\n" + "-14 8\n" + "18 -58\n" + "-41 -85\n"
					+ "1 -88\n" + "-21 -85\n" + "-11 82", string("") + "11");
}
