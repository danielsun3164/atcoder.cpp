#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem086";
}

TEST(typical90_problem086, case1) {
	check(string("") + "4 2\n" + "1 2 3 50\n" + "2 3 4 45", string("") + "13");
}

TEST(typical90_problem086, case2) {
	check(string("") + "8 2\n" + "2 3 6 1152886174205865983\n" + "1 2 8 1116611213275394047", string("") + "395781543");
}
