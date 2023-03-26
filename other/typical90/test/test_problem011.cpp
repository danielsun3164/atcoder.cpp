#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem011";

TEST(typical90_problem011, case1) {
	check(PATH + COMMAND, string("") + "1\n" + "12 3 69853", string("") + "69853");
}

TEST(typical90_problem011, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "7 3 200000\n" + "3 2 100000\n" + "5 3 150000", string("") + "350000");
}

TEST(typical90_problem011, case3) {
	check(PATH + COMMAND,
			string("") + "8\n" + "376 640 602876667\n" + "4015 1868 533609371\n" + "3330 152 408704870\n"
					+ "1874 798 30417810\n" + "2 1450 40706045\n" + "3344 1840 801881841\n" + "2853 1229 5235900\n"
					+ "458 1277 997429858", string("") + "1744196082");
}

TEST(typical90_problem011, case4) {
	check(PATH + COMMAND,
			string("") + "20\n" + "376 640 602876667\n" + "4015 868 533609371\n" + "3330 152 408704870\n"
					+ "1874 798 30417810\n" + "2 450 40706045\n" + "3344 840 801881841\n" + "2853 229 5235900\n"
					+ "458 277 997429858\n" + "1689 948 981897272\n" + "4774 393 997361572\n" + "4237 750 294800444\n"
					+ "4663 293 277667068\n" + "2249 808 444906878\n" + "3341 137 845317003\n" + "3625 765 739689211\n"
					+ "911 510 326127348\n" + "1343 193 235655766\n" + "842 323 406413067\n" + "1425 303 68833418\n"
					+ "212 808 745744264", string("") + "6583558066");
}

TEST(typical90_problem011, case5) {
	check(PATH + COMMAND,
			string("") + "30\n" + "376 140 602876667\n" + "4015 368 533609371\n" + "3330 152 408704870\n"
					+ "1874 298 30417810\n" + "2 450 40706045\n" + "3344 340 801881841\n" + "2853 229 5235900\n"
					+ "458 277 997429858\n" + "1689 448 981897272\n" + "4774 393 997361572\n" + "4237 250 294800444\n"
					+ "4663 293 277667068\n" + "2249 308 444906878\n" + "3341 137 845317003\n" + "3625 265 739689211\n"
					+ "911 10 326127348\n" + "1343 193 235655766\n" + "842 323 406413067\n" + "1425 303 68833418\n"
					+ "212 308 745744264\n" + "3563 376 196296968\n" + "4186 323 275217640\n" + "332 361 337078801\n"
					+ "4466 245 694789156\n" + "3763 250 432518459\n" + "2937 124 581390864\n" + "2255 227 642944345\n"
					+ "2851 480 688009163\n" + "1957 295 5532462\n" + "3277 445 15791361", string("") + "11420667389");
}
