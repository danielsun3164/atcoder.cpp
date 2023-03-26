#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem002";

TEST(typical90_problem002, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "()");
}

TEST(typical90_problem002, case2) {
	check_empty(PATH + COMMAND, string("") + "3");
}

TEST(typical90_problem002, case3) {
	check(PATH + COMMAND, string("") + "4", string("") + "(())\n" + "()()");
}

TEST(typical90_problem002, case4) {
	check(PATH + COMMAND, string("") + "10",
			string("") + "((((()))))\n" + "(((()())))\n" + "(((())()))\n" + "(((()))())\n" + "(((())))()\n"
					+ "((()(())))\n" + "((()()()))\n" + "((()())())\n" + "((()()))()\n" + "((())(()))\n"
					+ "((())()())\n" + "((())())()\n" + "((()))(())\n" + "((()))()()\n" + "(()((())))\n"
					+ "(()(()()))\n" + "(()(())())\n" + "(()(()))()\n" + "(()()(()))\n" + "(()()()())\n"
					+ "(()()())()\n" + "(()())(())\n" + "(()())()()\n" + "(())((()))\n" + "(())(()())\n"
					+ "(())(())()\n" + "(())()(())\n" + "(())()()()\n" + "()(((())))\n" + "()((()()))\n"
					+ "()((())())\n" + "()((()))()\n" + "()(()(()))\n" + "()(()()())\n" + "()(()())()\n"
					+ "()(())(())\n" + "()(())()()\n" + "()()((()))\n" + "()()(()())\n" + "()()(())()\n"
					+ "()()()(())\n" + "()()()()()");
}