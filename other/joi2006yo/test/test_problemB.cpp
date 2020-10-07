#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemB";

TEST(problemB, case1) {
	check(COMMAND,
			string("") + "3\n" + "A a\n" + "0 5\n" + "5 4\n" + "10\n" + "A\n" + "B\n" + "C\n" + "0\n" + "1\n" + "4\n"
					+ "5\n" + "a\n" + "b\n" + "A", string("") + "aBC5144aba");
}
