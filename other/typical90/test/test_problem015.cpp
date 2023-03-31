#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem015";
}

TEST(typical90_problem015, case1) {
	check(string("") + "1", string("") + "1");
}

TEST(typical90_problem015, case2) {
	check(string("") + "2", string("") + "3\n" + "2");
}

TEST(typical90_problem015, case3) {
	check(string("") + "3", string("") + "7\n" + "4\n" + "3");
}

TEST(typical90_problem015, case4) {
	check(string("") + "4", string("") + "15\n" + "7\n" + "5\n" + "4");
}

TEST(typical90_problem015, case5) {
	check(string("") + "7", string("") + "127\n" + "33\n" + "18\n" + "13\n" + "10\n" + "8\n" + "7");
}

TEST(typical90_problem015, case6) {
	check(string("") + "20",
			string("") + "1048575\n" + "17710\n" + "2744\n" + "906\n" + "430\n" + "250\n" + "167\n" + "118\n" + "90\n"
					+ "75\n" + "65\n" + "56\n" + "48\n" + "41\n" + "35\n" + "30\n" + "26\n" + "23\n" + "21\n" + "20");
}

TEST(typical90_problem015, case7) {
	check(string("") + "50",
			string("") + "898961330\n" + "951279874\n" + "262271567\n" + "14341526\n" + "1985602\n" + "466851\n"
					+ "153365\n" + "63191\n" + "30623\n" + "16687\n" + "9987\n" + "6453\n" + "4354\n" + "3070\n"
					+ "2290\n" + "1790\n" + "1427\n" + "1138\n" + "910\n" + "735\n" + "605\n" + "512\n" + "448\n"
					+ "405\n" + "375\n" + "350\n" + "326\n" + "303\n" + "281\n" + "260\n" + "240\n" + "221\n" + "203\n"
					+ "186\n" + "170\n" + "155\n" + "141\n" + "128\n" + "116\n" + "105\n" + "95\n" + "86\n" + "78\n"
					+ "71\n" + "65\n" + "60\n" + "56\n" + "53\n" + "51\n" + "50");
}
