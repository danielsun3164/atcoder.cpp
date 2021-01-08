#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc187C";

TEST(abc187C, case1) {
	check(COMMAND, string("") + "6\n" + "a\n" + "!a\n" + "b\n" + "!c\n" + "d\n" + "!d", string("") + "a",
			string("") + "d");
}

TEST(abc187C, case2) {
	check(COMMAND,
			string("") + "10\n" + "red\n" + "red\n" + "red\n" + "!orange\n" + "yellow\n" + "!blue\n" + "cyan\n"
					+ "!green\n" + "brown\n" + "!gray", string("") + "satisfiable");
}
