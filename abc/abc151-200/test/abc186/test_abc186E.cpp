#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186E";

TEST(abc186E, case1) {
	check(COMMAND, string("") + "4\n" + "10 4 3\n" + "1000 11 2\n" + "998244353 897581057 595591169\n" + "10000 6 14",
			string("") + "2\n" + "-1\n" + "249561088\n" + "3571");
}
