#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc223/B";
}

TEST(abc223_problemB, case1) {
	check(string("") + "aaba", string("") + "aaab\n" + "baaa");
}

TEST(abc223_problemB, case2) {
	check(string("") + "z", string("") + "z\n" + "z");
}

TEST(abc223_problemB, case3) {
	check(string("") + "abracadabra", string("") + "aabracadabr\n" + "racadabraab");
}
