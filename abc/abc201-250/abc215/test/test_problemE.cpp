#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc215_problemE, case1) {
	check(string("") + "4\n" + "BGBH", string("") + "13");
}

TEST(abc215_problemE, case2) {
	check(
			string("") + "100\n"
					+ "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBIEIJEIJIJCGCCFGIEBIHFCGFBFAEJIEJAJJHHEBBBJJJGJJJCCCBAAADCEHIIFEHHBGF",
			string("") + "330219020");
}
