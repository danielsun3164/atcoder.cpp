#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex8";
}

TEST(apg4b_ex8, case1) {
	check(string("") + "1\n" + "80\n" + "5", string("") + "400");
}

TEST(apg4b_ex8, case2) {
	check(string("") + "2\n" + "umai\n" + "150\n" + "3", string("") + "umai!\n" + "450");
}

TEST(apg4b_ex8, case3) {
	check(string("") + "2\n" + "good!\n" + "30\n" + "8", string("") + "good!!\n" + "240");
}
