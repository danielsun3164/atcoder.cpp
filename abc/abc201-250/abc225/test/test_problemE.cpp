#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc225/E";
}

TEST(abc225_problemE, case1) {
	check(string("") + "3\n" + "1 1\n" + "2 1\n" + "1 2", string("") + "2");
}

TEST(abc225_problemE, case2) {
	check(string("") + "10\n" + "414598724 87552841\n" +
			  "252911401 309688555\n" + "623249116 421714323\n" +
			  "605059493 227199170\n" + "410455266 373748111\n" +
			  "861647548 916369023\n" + "527772558 682124751\n" +
			  "356101507 249887028\n" + "292258775 110762985\n" +
			  "850583108 796044319",
		  string("") + "10");
}
