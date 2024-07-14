#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc001_problemD, case1) {
	check(string("") + "4\n" + "1148-1210\n" + "1323-1401\n" + "1106-1123\n" + "1129-1203",
		  string("") + "1105-1210\n" + "1320-1405");
}

TEST(abc001_problemD, case2) {
	check(string("") + "1\n" + "0000-2400", string("") + "0000-2400");
}

TEST(abc001_problemD, case3) {
	check(string("") + "6\n" + "1157-1306\n" + "1159-1307\n" + "1158-1259\n" + "1230-1240\n" +
			  "1157-1306\n" + "1315-1317",
		  string("") + "1155-1310\n" + "1315-1320");
}
