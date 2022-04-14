#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "BGBH", string("") + "13");
}

TEST(problemE, case2) {
	check(PATH + COMMAND,
			string("") + "100\n"
					+ "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBIEIJEIJIJCGCCFGIEBIHFCGFBFAEJIEJAJJHHEBBBJJJGJJJCCCBAAADCEHIIFEHHBGF",
			string("") + "330219020");
}
