#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC058_ABC042/D";
}

TEST(abc042_problemD, case1) {
	check(string("") + "2 3 1 1", string("") + "2");
}

TEST(abc042_problemD, case2) {
	check(string("") + "10 7 3 4", string("") + "3570");
}

TEST(abc042_problemD, case3) {
	check(string("") + "100000 100000 99999 99999", string("") + "1");
}

TEST(abc042_problemD, case4) {
	check(string("") + "100000 100000 44444 55555", string("") + "738162020");
}
