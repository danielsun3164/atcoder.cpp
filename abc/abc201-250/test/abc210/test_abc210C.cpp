#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc210C";

TEST(abc210C, case1) {
	check(COMMAND, string("") + "7 3\n" + "1 2 1 2 3 3 1", string("") + "3");
}

TEST(abc210C, case2) {
	check(COMMAND, string("") + "5 5\n" + "4 4 4 4 4", string("") + "1");
}

TEST(abc210C, case3) {
	check(COMMAND,
			string("") + "10 6\n"
					+ "304621362 506696497 304621362 506696497 834022578 304621362 414720753 304621362 304621362 414720753",
			string("") + "4");
}
