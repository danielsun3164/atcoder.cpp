#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc246/Ex";
}

TEST(abc246_problemEx, case1) {
	check(string("") + "3 3\n" + "100\n" + "2 1\n" + "2 ?\n" + "3 ?",
		  string("") + "5\n" + "7\n" + "10");
}

TEST(abc246_problemEx, case2) {
	check(
		string("") + "40 10\n" + "011?0??001??10?0??0?0?1?11?1?00?11??0?01\n" + "5 0\n" + "2 ?\n" +
			"30 ?\n" + "7 1\n" + "11 1\n" + "3 1\n" + "25 1\n" + "40 0\n" + "12 1\n" + "18 1",
		string("") + "746884092\n" + "532460539\n" + "299568633\n" + "541985786\n" + "217532539\n" +
			"217532539\n" + "217532539\n" + "573323772\n" + "483176957\n" + "236273405");
}
