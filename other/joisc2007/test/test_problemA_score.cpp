#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA_score";
	EXTERNAL = "joisc2007/Score";
}

TEST(joisc2007_problemA, case1) {
	check(string("") + "6\n" + "100\n" + "90\n" + "80\n" + "90\n" + "100\n" + "65",
		  string("") + "1\n" + "3\n" + "5\n" + "3\n" + "1\n" + "6");
}
