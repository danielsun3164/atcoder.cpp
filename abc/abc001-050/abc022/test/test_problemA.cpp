#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "5 60 70\n" + "50\n" + "10\n" + "10\n" + "10\n" + "10", string("") + "2");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "5 50 100\n" + "120\n" + "-10\n" + "-20\n" + "-30\n" + "70", string("") + "2");
}
