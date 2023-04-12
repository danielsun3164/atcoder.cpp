#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC193/B";
}

TEST(abc193_problemB, case1) {
	check(string("") + "3\n" + "3 9 5\n" + "4 8 5\n" + "5 7 5", string("") + "8");
}

TEST(abc193_problemB, case2) {
	check(string("") + "3\n" + "5 9 5\n" + "6 8 5\n" + "7 7 5", string("") + "-1");
}

TEST(abc193_problemB, case3) {
	check(
			string("") + "10\n" + "158260522 877914575 602436426\n" + "24979445 861648772 623690081\n"
					+ "433933447 476190629 262703497\n" + "211047202 971407775 628894325\n"
					+ "731963982 822804784 450968417\n" + "430302156 982631932 161735902\n"
					+ "880895728 923078537 707723857\n" + "189330739 910286918 802329211\n"
					+ "404539679 303238506 317063340\n" + "492686568 773361868 125660016", string("") + "861648772");
}
