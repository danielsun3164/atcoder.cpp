#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc242/E";
}

TEST(abc242_problemE, case1) {
	check(string("") + "5\n" + "3\n" + "AXA\n" + "6\n" + "ABCZAZ\n" + "30\n" +
			  "QWERTYUIOPASDFGHJKLZXCVBNMQWER\n" + "28\n" + "JVIISNEOXHSNEAAENSHXOENSIIVJ\n" +
			  "31\n" + "KVOHEEMSOZZASHENDIGOJRTJVMVSDWW",
		  string("") + "24\n" + "29\n" + "212370247\n" + "36523399\n" + "231364016");
}
