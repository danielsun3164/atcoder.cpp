#include <gtest/gtest.h>
#include <string>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc001D";

TEST(abc001D, case1) {
	check(COMMAND, string("") + "4\n" + "1148-1210\n" + "1323-1401\n" + "1106-1123\n" + "1129-1203",
			string("") + "1105-1210\n" + "1320-1405");
}

TEST(abc001D, case2) {
	check(COMMAND, string("") + "1\n" + "0000-2400", string("") + "0000-2400");
}

TEST(abc001D, case3) {
	check(COMMAND,
			string("") + "6\n" + "1157-1306\n" + "1159-1307\n" + "1158-1259\n" + "1230-1240\n" + "1157-1306\n"
					+ "1315-1317", string("") + "1155-1310\n" + "1315-1320");
}
