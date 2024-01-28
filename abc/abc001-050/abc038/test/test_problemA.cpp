#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc038_problemA, case1) {
	check(string("") + "ICEDT", string("") + "YES");
}

TEST(abc038_problemA, case2) {
	check(string("") + "MUGICHA", string("") + "NO");
}

TEST(abc038_problemA, case3) {
	check(string("") + "OOLONGT", string("") + "YES");
}

TEST(abc038_problemA, case4) {
	check(string("") + "T", string("") + "YES");
}

TEST(abc038_problemA, case5) {
	check(string("") + "TEA", string("") + "NO");
}
