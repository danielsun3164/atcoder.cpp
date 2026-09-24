#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC071/B";
}

TEST(abc058_problemB, case1) {
	check(string("") + "xyz\n" + "abc", string("") + "xaybzc");
}

TEST(abc058_problemB, case2) {
	check(string("") + "atcoderbeginnercontest\n" + "atcoderregularcontest",
		  string("") + "aattccooddeerrbreeggiunlnaerrccoonntteesstt");
}
