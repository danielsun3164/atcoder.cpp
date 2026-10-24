#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc063_problemC, case1) {
	check(string("") + "4\n" + "2100 2500 2700 2700", string("") + "2 2");
}

TEST(abc063_problemC, case2) {
	check(string("") + "5\n" + "1100 1900 2800 3200 3200", string("") + "3 5");
}

TEST(abc063_problemC, case3) {
	check(string("") + "20\n" +
			  "800 810 820 830 840 850 860 870 880 890 900 910 920 930 940 950 960 970 980 990",
		  string("") + "1 1");
}
