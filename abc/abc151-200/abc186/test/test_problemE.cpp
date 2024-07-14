#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC186/E";
}

TEST(abc186_problemE, case1) {
	check(string("") + "4\n" + "10 4 3\n" + "1000 11 2\n" + "998244353 897581057 595591169\n" +
			  "10000 6 14",
		  string("") + "2\n" + "-1\n" + "249561088\n" + "3571");
}
