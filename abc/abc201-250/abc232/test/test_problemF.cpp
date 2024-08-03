#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc232/F";
}

TEST(abc232_problemF, case1) {
	check(string("") + "4 3 5\n" + "4 2 5 2\n" + "6 4 2 1", string("") + "16");
}

TEST(abc232_problemF, case2) {
	check(string("") + "5 12345 6789\n" + "1 2 3 4 5\n" + "1 2 3 4 5", string("") + "0");
}

TEST(abc232_problemF, case3) {
	check(string("") + "18 20719114 5117250357733867\n" +
			  "10511029 36397527 63027379 44706927 47672230 79861204 57882493 42931589 51053644 "
			  "52300688 43971370 26515475 62139996 41282303 34022578 12523039 6696497 64922712\n" +
			  "14720753 4621362 25269832 91410838 86751784 32741849 6602693 60719353 28911226 "
			  "88280613 18745325 80675202 34289776 37849132 99280042 73760634 43897718 40659077",
		  string("") + "13104119429316474");
}
