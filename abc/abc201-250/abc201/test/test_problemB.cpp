#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc201_problemB, case1) {
	check(string("") + "3\n" + "Everest 8849\n" + "K2 8611\n" + "Kangchenjunga 8586", string("") + "K2");
}

TEST(abc201_problemB, case2) {
	check(string("") + "4\n" + "Kita 3193\n" + "Aino 3189\n" + "Fuji 3776\n" + "Okuhotaka 3190", string("") + "Kita");
}

TEST(abc201_problemB, case3) {
	check(string("") + "4\n" + "QCFium 2846\n" + "chokudai 2992\n" + "kyoprofriends 2432\n" + "penguinman 2390",
			string("") + "QCFium");
}
