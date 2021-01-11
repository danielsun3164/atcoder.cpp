#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc188D";

TEST(abc188D, case1) {
	check(COMMAND, string("") + "2 6\n" + "1 2 4\n" + "2 2 4", string("") + "10");
}

TEST(abc188D, case2) {
	check(COMMAND,
			string("") + "5 1000000000\n" + "583563238 820642330 44577\n" + "136809000 653199778 90962\n"
					+ "54601291 785892285 50554\n" + "5797762 453599267 65697\n" + "468677897 916692569 87409",
			string("") + "163089627821228");
}

TEST(abc188D, case3) {
	check(COMMAND,
			string("") + "5 100000\n" + "583563238 820642330 44577\n" + "136809000 653199778 90962\n"
					+ "54601291 785892285 50554\n" + "5797762 453599267 65697\n" + "468677897 916692569 87409",
			string("") + "88206004785464");
}
