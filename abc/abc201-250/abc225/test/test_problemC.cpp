#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc225/C";
}

TEST(abc225_problemC, case1) {
	check(string("") + "2 3\n" + "1 2 3\n" + "8 9 10", string("") + "Yes");
}

TEST(abc225_problemC, case2) {
	check(string("") + "2 1\n" + "1\n" + "2", string("") + "No");
}

TEST(abc225_problemC, case3) {
	check(string("") + "10 4\n" + "1346 1347 1348 1349\n" + "1353 1354 1355 1356\n" +
			  "1360 1361 1362 1363\n" + "1367 1368 1369 1370\n" + "1374 1375 1376 1377\n" +
			  "1381 1382 1383 1384\n" + "1388 1389 1390 1391\n" + "1395 1396 1397 1398\n" +
			  "1402 1403 1404 1405\n" + "1409 1410 1411 1412",
		  string("") + "Yes");
}
