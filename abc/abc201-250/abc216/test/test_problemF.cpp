#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc216/F";
}

TEST(abc216_problemF, case1) {
	check(string("") + "2\n" + "3 1\n" + "1 2", string("") + "2");
}

TEST(abc216_problemF, case2) {
	check(string("") + "2\n" + "1 1\n" + "2 2", string("") + "0");
}

TEST(abc216_problemF, case3) {
	check(
			string("") + "20\n"
					+ "1937 3980 2689 1208 3640 1979 581 2271 4229 3948 3708 1522 4161 4661 3797 96 3388 3395 2920 2247\n"
					+ "4485 2580 174 1156 3770 3396 3558 3500 3494 479 269 3383 1230 1711 3545 3919 134 475 3796 1017",
			string("") + "476");
}
