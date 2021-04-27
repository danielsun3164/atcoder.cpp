#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc198D";

TEST(abc198D, case1) {
	check(COMMAND, string("") + "a\n" + "b\n" + "c", string("") + "1\n" + "2\n" + "3");
}

TEST(abc198D, case2) {
	check(COMMAND, string("") + "x\n" + "x\n" + "y", string("") + "1\n" + "1\n" + "2");
}

TEST(abc198D, case3) {
	check(COMMAND, string("") + "p\n" + "q\n" + "p", string("") + "UNSOLVABLE");
}

TEST(abc198D, case4) {
	check(COMMAND, string("") + "abcd\n" + "efgh\n" + "ijkl", string("") + "UNSOLVABLE");
}

TEST(abc198D, case5) {
	check(COMMAND, string("") + "send\n" + "more\n" + "money", string("") + "9567\n" + "1085\n" + "10652");
}
