#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemC_mall";

TEST(problemC, case1) {
	check(COMMAND,
			string("") + "7 6\n" + "3 2\n" + "26 29 84 15 -1 1 71\n" + "45 14 38 91 62 77 35\n"
					+ "68 -1 -1 90 63 56 70\n" + "31 2 4 74 72 41 90\n" + "100 26 21 -1 44 72 60\n"
					+ "71 4 40 93 48 -1 50", string("") + "184");
}
