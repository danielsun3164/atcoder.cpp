#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND,
			string("") + "january\n" + "february\n" + "march\n" + "april\n" + "may\n" + "june\n" + "july\n" + "august\n"
					+ "september\n" + "october\n" + "november\n" + "december", string("") + "8");
}

TEST(problemB, case2) {
	check(PATH + COMMAND,
			string("") + "rrrrrrrrrr\n" + "srrrrrrrrr\n" + "rsr\n" + "ssr\n" + "rrs\n" + "srsrrrrrr\n" + "rssrrrrrr\n"
					+ "sss\n" + "rrr\n" + "srr\n" + "rsrrrrrrrr\n" + "ssrrrrrrrr", string("") + "11");
}
