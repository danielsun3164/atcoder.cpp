#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc195D";

TEST(abc195D, case1) {
	check(COMMAND, string("") + "3 4 3\n" + "1 9\n" + "5 3\n" + "7 8\n" + "1 8 6 9\n" + "4 4\n" + "1 4\n" + "1 3",
			string("") + "20\n" + "0\n" + "9");
}
