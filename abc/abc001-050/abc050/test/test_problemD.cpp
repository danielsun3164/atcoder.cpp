#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC066/D";
}

TEST(abc050_problemD, case1) {
	check(string("") + "3", string("") + "5");
}

TEST(abc050_problemD, case2) {
	check(string("") + "1422", string("") + "52277");
}

TEST(abc050_problemD, case3) {
	check(string("") + "1000000000000000000", string("") + "787014179");
}
