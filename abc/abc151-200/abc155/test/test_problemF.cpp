#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3 4\n" + "5 1\n" + "10 1\n" + "8 0\n" + "1 10\n" + "4 5\n" + "6 7\n" + "8 9",
			string("") + "2\n" + "1 4");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "4 2\n" + "2 0\n" + "3 1\n" + "5 1\n" + "7 0\n" + "1 4\n" + "4 7",
			string("") + "-1");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "3 2\n" + "5 0\n" + "10 0\n" + "8 0\n" + "6 9\n" + "66 99", string("") + "0\n");
}

TEST(problemF, case4) {
	check(PATH + COMMAND,
			string("") + "12 20\n" + "536130100 1\n" + "150049660 1\n" + "79245447 1\n" + "132551741 0\n"
					+ "89484841 1\n" + "328129089 0\n" + "623467741 0\n" + "248785745 0\n" + "421631475 0\n"
					+ "498966877 0\n" + "43768791 1\n" + "112237273 0\n" + "21499042 142460201\n"
					+ "58176487 384985131\n" + "88563042 144788076\n" + "120198276 497115965\n"
					+ "134867387 563350571\n" + "211946499 458996604\n" + "233934566 297258009\n"
					+ "335674184 555985828\n" + "414601661 520203502\n" + "101135608 501051309\n"
					+ "90972258 300372385\n" + "255474956 630621190\n" + "436210625 517850028\n"
					+ "145652401 192476406\n" + "377607297 520655694\n" + "244404406 304034433\n"
					+ "112237273 359737255\n" + "392593015 463983307\n" + "150586788 504362212\n" + "54772353 83124235",
			string("") + "5\n" + "1 7 8 9 11");
}