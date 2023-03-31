#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemG";
}

TEST(abc217_problemG, case1) {
	check(string("") + "4 2", string("") + "0\n" + "2\n" + "4\n" + "1");
}

TEST(abc217_problemG, case2) {
	check(string("") + "6 6", string("") + "1\n" + "31\n" + "90\n" + "65\n" + "15\n" + "1");
}

TEST(abc217_problemG, case3) {
	check(string("") + "20 5",
			string("") + "0\n" + "0\n" + "0\n" + "331776\n" + "207028224\n" + "204931064\n" + "814022582\n"
					+ "544352515\n" + "755619435\n" + "401403040\n" + "323173195\n" + "538468102\n" + "309259764\n"
					+ "722947327\n" + "162115584\n" + "10228144\n" + "423360\n" + "10960\n" + "160\n" + "1");
}
