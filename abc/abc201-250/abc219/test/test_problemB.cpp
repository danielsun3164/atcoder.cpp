#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "abc219/B";
}

TEST(abc219_problemB, case1) {
	check(string("") + "mari\n" + "to\n" + "zzo\n" + "1321", string("") + "marizzotomari");
}

TEST(abc219_problemB, case2) {
	check(string("") + "abra\n" + "cad\n" + "abra\n" + "123", string("") + "abracadabra");
}

TEST(abc219_problemB, case3) {
	check(string("") + "a\n" + "b\n" + "c\n" + "1", string("") + "a");
}
