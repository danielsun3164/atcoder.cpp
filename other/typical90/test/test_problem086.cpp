#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem086";

TEST(typical90_problem086, case1) {
	check(PATH + COMMAND, string("") + "4 2\n" + "1 2 3 50\n" + "2 3 4 45", string("") + "13");
}

TEST(typical90_problem086, case2) {
	check(PATH + COMMAND, string("") + "8 2\n" + "2 3 6 1152886174205865983\n" + "1 2 8 1116611213275394047",
			string("") + "395781543");
}
