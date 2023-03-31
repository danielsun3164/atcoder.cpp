#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc022_problemA, case1) {
	check(string("") + "5 60 70\n" + "50\n" + "10\n" + "10\n" + "10\n" + "10", string("") + "2");
}

TEST(abc022_problemA, case2) {
	check(string("") + "5 50 100\n" + "120\n" + "-10\n" + "-20\n" + "-30\n" + "70", string("") + "2");
}
