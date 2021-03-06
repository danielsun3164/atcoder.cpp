#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc189E";

TEST(abc189E, case1) {
	check(COMMAND,
			string("") + "1\n" + "1 2\n" + "4\n" + "1\n" + "3 3\n" + "2\n" + "4 2\n" + "5\n" + "0 1\n" + "1 1\n"
					+ "2 1\n" + "3 1\n" + "4 1", string("") + "1 2\n" + "2 -1\n" + "4 -1\n" + "1 4\n" + "1 0");
}

TEST(abc189E, case2) {
	check(COMMAND,
			string("") + "2\n" + "1000000000 0\n" + "0 1000000000\n" + "4\n" + "3 -1000000000\n" + "4 -1000000000\n"
					+ "3 1000000000\n" + "4 1000000000\n" + "2\n" + "4 1\n" + "4 2",
			string("") + "5000000000 4000000000\n" + "4000000000 5000000000");
}
