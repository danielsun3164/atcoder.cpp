#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc215/E";
}

TEST(abc215_problemE, case1) {
	check(string("") + "4\n" + "BGBH", string("") + "13");
}

TEST(abc215_problemE, case2) {
	check(string("") + "100\n" +
			  "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBIEIJEIJIJCGCCFGIEBIHFCGFBFAEJIEJAJJHHEBBBJJJGJJJCCCB"
			  "AAADCEHIIFEHHBGF",
		  string("") + "330219020");
}
