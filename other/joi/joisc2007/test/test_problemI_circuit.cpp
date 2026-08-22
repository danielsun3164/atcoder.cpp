#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemI_circuit";
	EXTERNAL = "joisc2007/Circuit";
}

TEST(joisc2007_problemI, case1) {
	check(string("") + "3 5\n" + "3\n" + "1\n" + "2", string("") + "2\n" + "3\n" + "1");
}

TEST(joisc2007_problemI, case2) {
	check(string("") + "4 4\n" + "2\n" + "1\n" + "4\n" + "3", string("") + "0");
}
