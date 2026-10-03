#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC073/A";
}

TEST(abc060_problemA, case1) {
	check(string("") + "rng gorilla apple", string("") + "YES");
}

TEST(abc060_problemA, case2) {
	check(string("") + "yakiniku unagi sushi", string("") + "NO");
}

TEST(abc060_problemA, case3) {
	check(string("") + "a a a", string("") + "YES");
}

TEST(abc060_problemA, case4) {
	check(string("") + "aaaaaaaaab aaaaaaaaaa aaaaaaaaab", string("") + "NO");
}
