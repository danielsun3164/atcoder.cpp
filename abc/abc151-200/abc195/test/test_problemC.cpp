#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "1010", string("") + "11");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "27182818284590", string("") + "107730272137364");
}
