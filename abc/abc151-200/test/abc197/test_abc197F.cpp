#include <gtest/gtest.h>
#include <string>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc197F";

TEST(abc197F, case1) {
	check(COMMAND,
			string("") + "8 8\n" + "1 2 a\n" + "2 3 b\n" + "1 3 c\n" + "3 4 b\n" + "4 5 a\n" + "5 6 c\n" + "6 7 b\n"
					+ "7 8 a", string("") + "10");
}

TEST(abc197F, case2) {
	check(COMMAND, string("") + "4 5\n" + "1 1 a\n" + "1 2 a\n" + "2 3 a\n" + "3 4 b\n" + "4 4 a", string("") + "5");
}

TEST(abc197F, case3) {
	check(COMMAND, string("") + "3 4\n" + "1 1 a\n" + "1 2 a\n" + "2 3 b\n" + "3 3 b", string("") + "-1");
}