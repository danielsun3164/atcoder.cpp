#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc247/G";
}

TEST(abc247_problemG, case1) {
	check(string("") + "3\n" + "1 1 100\n" + "1 20 10\n" + "2 1 1",
		  string("") + "2\n" + "100\n" + "11");
}

TEST(abc247_problemG, case2) {
	check(string("") + "10\n" + "1 4 142135623\n" + "2 6 457513110\n" + "3 1 622776601\n" +
			  "5 1 961524227\n" + "2 2 360679774\n" + "2 4 494897427\n" + "3 7 416573867\n" +
			  "5 2 915026221\n" + "1 7 320508075\n" + "5 3 851648071",
		  string("") + "4\n" + "961524227\n" + "1537802822\n" + "2032700249\n" + "2353208324");
}
