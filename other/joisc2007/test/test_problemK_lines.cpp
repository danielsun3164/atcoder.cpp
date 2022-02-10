#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemK_lines";

TEST(problemK, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "0 4 6 4\n" + "0 0 6 6\n" + "1 0 1 6\n" + "0 6 6 0", string("") + "11");
}
