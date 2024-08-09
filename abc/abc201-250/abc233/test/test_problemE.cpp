#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc233/E";
}

TEST(abc233_problemE, case1) {
	check(string("") + "1225", string("") + "1360");
}

TEST(abc233_problemE, case2) {
	check(string("") + "99999", string("") + "111105");
}

TEST(abc233_problemE, case3) {
	check(string("") + "314159265358979323846264338327950288419716939937510",
		  string("") + "349065850398865915384738153697722542688574377708317");
}
