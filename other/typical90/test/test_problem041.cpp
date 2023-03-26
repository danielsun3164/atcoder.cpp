#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem041";

TEST(typical90_problem041, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 4\n" + "6 1\n" + "5 8", string("") + "17");
}

TEST(typical90_problem041, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "2 2\n" + "2 3\n" + "3 2", string("") + "0");
}

TEST(typical90_problem041, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "2 39\n" + "39 35\n" + "17 5", string("") + "599");
}

TEST(typical90_problem041, case4) {
	check(PATH + COMMAND,
			string("") + "10\n" + "72 7\n" + "54 25\n" + "97 48\n" + "37 47\n" + "34 54\n" + "4 16\n" + "62 1\n"
					+ "59 22\n" + "99 73\n" + "34 75", string("") + "4828");
}

TEST(typical90_problem041, case5) {
	check(PATH + COMMAND,
			string("") + "30\n" + "878317816 654163251\n" + "686185971 65193664\n" + "421988001 893301255\n"
					+ "337790787 848308131\n" + "116633641 453711858\n" + "147679897 275450390\n"
					+ "871549713 368160131\n" + "945135251 515070794\n" + "113677189 553747963\n"
					+ "648722370 798825746\n" + "334960984 163211483\n" + "477414168 849868430\n"
					+ "46724716 593116536\n" + "424597820 84043071\n" + "456749260 981436379\n"
					+ "167906984 546584517\n" + "187306934 201207913\n" + "535850448 43428774\n"
					+ "602081737 111568378\n" + "607467836 80430906\n" + "965538187 537789555\n"
					+ "69199019 485172741\n" + "267885487 934316143\n" + "883812229 276272851\n"
					+ "507976072 19708905\n" + "951100460 639017801\n" + "43859603 556279043\n" + "300658736 79240016\n"
					+ "231304846 220059094\n" + "854667690 399502355", string("") + "607281204170558988");
}
