#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc231/B";
}

TEST(abc231_problemB, case1) {
	check(string("") + "5\n" + "snuke\n" + "snuke\n" + "takahashi\n" + "takahashi\n" + "takahashi",
		  string("") + "takahashi");
}

TEST(abc231_problemB, case2) {
	check(string("") + "5\n" + "takahashi\n" + "takahashi\n" + "aoki\n" + "takahashi\n" + "snuke",
		  string("") + "takahashi");
}

TEST(abc231_problemB, case3) {
	check(string("") + "1\n" + "a", string("") + "a");
}
