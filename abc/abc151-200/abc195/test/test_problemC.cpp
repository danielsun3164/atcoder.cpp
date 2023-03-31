#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc195_problemC, case1) {
	check(string("") + "1010", string("") + "11");
}

TEST(abc195_problemC, case2) {
	check(string("") + "27182818284590", string("") + "107730272137364");
}
