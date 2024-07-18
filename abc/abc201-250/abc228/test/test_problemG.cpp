#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc228/G";
}

TEST(abc228_problemG, case1) {
	check(string("") + "2 2 1\n" + "31\n" + "41", string("") + "5");
}

TEST(abc228_problemG, case2) {
	check(string("") + "2 3 4\n" + "777\n" + "777", string("") + "1");
}

TEST(abc228_problemG, case3) {
	check(string("") + "10 10 300\n" + "3181534389\n" + "4347471911\n" + "4997373645\n" +
			  "5984584273\n" + "1917179465\n" + "3644463294\n" + "1234548423\n" + "6826453721\n" +
			  "5892467783\n" + "1211598363",
		  string("") + "685516949");
}
