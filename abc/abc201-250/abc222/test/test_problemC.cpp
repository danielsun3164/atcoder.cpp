#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc222/C";
}

TEST(abc222_problemC, case1) {
	check(string("") + "2 3\n" + "GCP\n" + "PPP\n" + "CCC\n" + "PPC", string("") + "3\n" + "1\n" + "2\n" + "4");
}

TEST(abc222_problemC, case2) {
	check(string("") + "2 2\n" + "GC\n" + "PG\n" + "CG\n" + "PP", string("") + "1\n" + "2\n" + "3\n" + "4");
}
