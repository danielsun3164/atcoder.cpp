#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc248/F";
}

TEST(abc248_problemF, case1) {
	check(string("") + "3 998244353", string("") + "7 15");
}

TEST(abc248_problemF, case2) {
	check(string("") + "16 999999937",
		  string("") +
			  "46 1016 14288 143044 1079816 6349672 29622112 110569766 330377828 784245480 "
			  "453609503 38603306 44981526 314279703 408855776");
}
