#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc190F";

TEST(abc190F, case1) {
	check(COMMAND, string("") + "4\n" + "0 1 2 3", string("") + "0\n" + "3\n" + "4\n" + "3");
}

TEST(abc190F, case2) {
	check(COMMAND, string("") + "10\n" + "0 3 1 5 4 2 9 6 8 7",
			string("") + "9\n" + "18\n" + "21\n" + "28\n" + "27\n" + "28\n" + "33\n" + "24\n" + "21\n" + "14");
}
