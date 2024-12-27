#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc231/G";
}

TEST(abc231_problemG, case1) {
	check(string("") + "3 1\n" + "1 2 3", string("") + "665496245");
}

TEST(abc231_problemG, case2) {
	check(string("") + "2 2\n" + "1 2", string("") + "499122182");
}

TEST(abc231_problemG, case3) {
	check(string("") + "10 1000000000\n" +
			  "998244350 998244351 998244352 998244353 998244354 998244355 998244356 998244357 "
			  "998244358 998244359",
		  string("") + "138512322");
}
