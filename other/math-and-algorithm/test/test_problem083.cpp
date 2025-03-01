#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem083";
	EXTERNAL = "typical90/014";
}

TEST(math_and_algorithm_problem083, case1) {
	check(string("") + "1\n" + "869\n" + "120", string("") + "749");
}

TEST(math_and_algorithm_problem083, case2) {
	check(string("") + "6\n" + "8 6 9 1 2 0\n" + "1 5 7 2 3 9", string("") + "5");
}

TEST(math_and_algorithm_problem083, case3) {
	check(string("") + "10\n" + "31 41 59 26 53 58 97 93 23 84\n" + "17 32 5 8 7 56 88 77 29 35",
		  string("") + "211");
}

TEST(math_and_algorithm_problem083, case4) {
	check(string("") + "20\n" +
			  "804289382 846930886 681692776 714636914 957747792 424238335 719885386 649760491 "
			  "596516649 189641420 25202361 350490026 783368690 102520058 44897761 967513925 "
			  "365180539 540383425 304089172 303455735\n" +
			  "35005211 521595368 294702567 726956428 336465782 861021530 278722862 233665123 "
			  "145174065 468703135 101513928 801979801 315634021 635723058 369133068 125898166 "
			  "59961392 89018454 628175011 656478041",
		  string("") + "2736647674");
}
