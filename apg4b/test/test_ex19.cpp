#include <gtest/gtest.h>
#include <string>

#include "command.h"

using namespace std;

static const string COMMAND = "./ex19";

TEST(ex19, case1) {
	check(COMMAND,
			string("") + "1 2 3 4 5 6 7 8 9\n" + "2 4 100 8 10 12 14 16 18\n" + "3 6 9 12 15 18 21 24 27\n"
					+ "4 8 12 16 20 24 28 32 36\n" + "5 10 15 20 25 30 35 40 45\n" + "6 12 18 24 30 36 42 48 54\n"
					+ "7 14 21 28 35 42 49 56 63\n" + "8 16 24 32 40 48 56 64 72\n" + "9 18 27 36 45 54 63 72 81",
			string("") + "1 2 3 4 5 6 7 8 9\n" + "2 4 6 8 10 12 14 16 18\n" + "3 6 9 12 15 18 21 24 27\n"
					+ "4 8 12 16 20 24 28 32 36\n" + "5 10 15 20 25 30 35 40 45\n" + "6 12 18 24 30 36 42 48 54\n"
					+ "7 14 21 28 35 42 49 56 63\n" + "8 16 24 32 40 48 56 64 72\n" + "9 18 27 36 45 54 63 72 81\n"
					+ "80\n" + "1");
}

TEST(ex19, case2) {
	check(COMMAND,
			string("") + "1 2 3 4 5 6 7 8 9\n" + "2 4 6 8 10 37 14 79 18\n" + "3 6 9 12 15 18 21 24 39\n"
					+ "4 8 12 16 20 24 28 32 36\n" + "5 10 15 20 25 30 35 40 41\n" + "6 67 18 24 50 36 42 10 9\n"
					+ "7 14 21 28 35 42 49 56 63\n" + "8 16 24 32 40 48 56 64 14\n" + "9 18 27 36 45 54 63 72 81",
			string("") + "1 2 3 4 5 6 7 8 9\n" + "2 4 6 8 10 12 14 16 18\n" + "3 6 9 12 15 18 21 24 27\n"
					+ "4 8 12 16 20 24 28 32 36\n" + "5 10 15 20 25 30 35 40 45\n" + "6 12 18 24 30 36 42 48 54\n"
					+ "7 14 21 28 35 42 49 56 63\n" + "8 16 24 32 40 48 56 64 72\n" + "9 18 27 36 45 54 63 72 81\n"
					+ "72\n" + "9");
}
