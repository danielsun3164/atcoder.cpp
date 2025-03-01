#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc199/F";
}

TEST(abc199_problemF, case1) {
	check(string("") + "3 2 1\n" + "3 1 5\n" + "1 2\n" + "1 3",
		  string("") + "3\n" + "500000005\n" + "500000008");
}

TEST(abc199_problemF, case2) {
	check(string("") + "3 2 2\n" + "12 48 36\n" + "1 2\n" + "1 3",
		  string("") + "750000036\n" + "36\n" + "250000031");
}

TEST(abc199_problemF, case3) {
	check(string("") + "4 5 1000\n" + "578 173 489 910\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 1\n" +
			  "1 3",
		  string("") + "201113830\n" + "45921509\n" + "67803140\n" + "685163678");
}
