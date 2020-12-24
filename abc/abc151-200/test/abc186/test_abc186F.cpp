#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186F";

TEST(abc186F, case1) {
	check(COMMAND, string("") + "4 3 2\n" + "2 2\n" + "3 3", string("") + "10");
}

TEST(abc186F, case2) {
	check(COMMAND, string("") + "5 4 4\n" + "3 2\n" + "3 4\n" + "4 2\n" + "5 2", string("") + "14");
}

TEST(abc186F, case3) {
	check(COMMAND, string("") + "200000 200000 0", string("") + "40000000000");
}

TEST(abc186F, case4) {
	check(COMMAND, string("") + "100000 200000 0", string("") + "20000000000");
}
