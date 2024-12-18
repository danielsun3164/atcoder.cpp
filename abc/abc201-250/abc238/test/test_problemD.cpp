#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc238/D";
}

TEST(abc238_problemD, case1) {
	check(string("") + "2\n" + "1 8\n" + "4 2", string("") + "Yes\n" + "No");
}

TEST(abc238_problemD, case2) {
	check(string("") + "4\n" + "201408139683277485 381410962404666524\n" +
			  "360288799186493714 788806911317182736\n" + "18999951915747344 451273909320288229\n" +
			  "962424162689761932 1097438793187620758",
		  string("") + "No\n" + "Yes\n" + "Yes\n" + "No");
}
