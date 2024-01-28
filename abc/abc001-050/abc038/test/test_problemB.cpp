#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc038_problemB, case1) {
	check(string("") + "1080 1920\n" + "1080 1920", string("") + "YES");
}

TEST(abc038_problemB, case2) {
	check(string("") + "1080 1920\n" + "1920 1080", string("") + "YES");
}

TEST(abc038_problemB, case3) {
	check(string("") + "334 668\n" + "668 1002", string("") + "YES");
}

TEST(abc038_problemB, case4) {
	check(string("") + "100 200\n" + "300 150", string("") + "NO");
}

TEST(abc038_problemB, case5) {
	check(string("") + "120 120\n" + "240 240", string("") + "NO");
}
