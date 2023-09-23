#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
	TOLERANCE = 1E-6;
	EXTERNAL = "ABC157/F";
}

TEST(abc157_problemF, case1) {
	check_about(string("") + "4 3\n" + "-1 0 3\n" + "0 0 3\n" + "1 0 2\n" + "1 1 40", 2.4);
}

TEST(abc157_problemF, case2) {
	check_about(
			string("") + "10 5\n" + "-879 981 26\n" + "890 -406 81\n" + "512 859 97\n" + "362 -955 25\n"
					+ "128 553 17\n" + "-885 763 2\n" + "449 310 57\n" + "-656 -204 11\n" + "-270 76 40\n"
					+ "184 170 16", 7411.225279);
}
