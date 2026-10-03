#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc243/F";
}

TEST(abc243_problemF, case1) {
	check(string("") + "2 1 2\n" + "2\n" + "1", string("") + "221832079");
}

TEST(abc243_problemF, case2) {
	check(string("") + "3 3 2\n" + "1\n" + "1\n" + "1", string("") + "0");
}

TEST(abc243_problemF, case3) {
	check(string("") + "3 3 10\n" + "499122176\n" + "499122175\n" + "1", string("") + "335346748");
}

TEST(abc243_problemF, case4) {
	check(string("") + "10 8 15\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" +
			  "1\n" + "1",
		  string("") + "755239064");
}
