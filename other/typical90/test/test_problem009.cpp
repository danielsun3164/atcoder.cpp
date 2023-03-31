#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem009";
}
static const double TOLERANCE = 1E-7;

TEST(typical90_problem009, case1) {
	check_about(string("") + "3\n" + "0 0\n" + "0 10\n" + "10 10", 90, TOLERANCE);
}

TEST(typical90_problem009, case2) {
	check_about(string("") + "5\n" + "8 6\n" + "9 1\n" + "2 0\n" + "1 0\n" + "0 1", 171.869897645844, TOLERANCE);
}

TEST(typical90_problem009, case3) {
	check_about(
			string("") + "10\n" + "0 0\n" + "1 7\n" + "2 6\n" + "2 8\n" + "3 5\n" + "5 5\n" + "6 7\n" + "7 1\n"
					+ "7 9\n" + "8 8", 180, TOLERANCE);
}

TEST(typical90_problem009, case4) {
	check_about(
			string("") + "40\n" + "298750376 229032640\n" + "602876667 944779015\n" + "909539868 533609371\n"
					+ "231368330 445484152\n" + "408704870 850216874\n" + "349286798 30417810\n"
					+ "807260002 554049450\n" + "40706045 380488344\n" + "749325840 801881841\n"
					+ "459457853 66691229\n" + "5235900 8100458\n" + "46697277 997429858\n" + "827651689 790051948\n"
					+ "981897272 271364774\n" + "536232393 997361572\n" + "449659237 602191750\n"
					+ "294800444 346669663\n" + "792837293 277667068\n" + "997282249 468293808\n"
					+ "444906878 702693341\n" + "894286137 845317003\n" + "27053625 926547765\n"
					+ "739689211 447395911\n" + "902031510 326127348\n" + "582956343 842918193\n"
					+ "235655766 844300842\n" + "438389323 406413067\n" + "862896425 464876303\n"
					+ "68833418 76340212\n" + "911399808 745744264\n" + "551223563 854507876\n" + "196296968 52144186\n"
					+ "431165823 275217640\n" + "424495332 847375861\n" + "337078801 83054466\n"
					+ "648322745 694789156\n" + "301518763 319851750\n" + "432518459 772897937\n"
					+ "630628124 581390864\n" + "313132255 350770227", 179.9834340684232, TOLERANCE);
}
