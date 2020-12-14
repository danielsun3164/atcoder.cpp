#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc185B";

TEST(abc185B, case1) {
	check(COMMAND, string("") + "10 2 20\n" + "9 11\n" + "13 17", string("") + "Yes");
}

TEST(abc185B, case2) {
	check(COMMAND, string("") + "10 2 20\n" + "9 11\n" + "13 16", string("") + "No");
}

TEST(abc185B, case3) {
	check(COMMAND, string("") + "15 3 30\n" + "5 8\n" + "15 17\n" + "24 27", string("") + "Yes");
}

TEST(abc185B, case4) {
	check(COMMAND, string("") + "20 1 30\n" + "20 29", string("") + "No");
}

TEST(abc185B, case5) {
	check(COMMAND, string("") + "20 1 30\n" + "1 10", string("") + "No");
}
