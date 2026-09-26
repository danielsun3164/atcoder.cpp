#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc242/D";
}

TEST(abc242_problemD, case1) {
	check(string("") + "ABC\n" + "4\n" + "0 1\n" + "1 1\n" + "1 3\n" + "1 6",
		  string("") + "A\n" + "B\n" + "C\n" + "B");
}

TEST(abc242_problemD, case2) {
	check(string("") + "CBBAACCCCC\n" + "5\n" + "57530144230160008 659279164847814847\n" +
			  "29622990657296329 861239705300265164\n" + "509705228051901259 994708708957785197\n" +
			  "176678501072691541 655134104344481648\n" + "827291290937314275 407121144297426665",
		  string("") + "A\n" + "A\n" + "C\n" + "A\n" + "A");
}
