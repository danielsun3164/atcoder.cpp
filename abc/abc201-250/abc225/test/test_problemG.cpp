#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc225/G";
}

TEST(abc225_problemG, case1) {
	check(string("") + "2 2 2\n" + "2 10\n" + "8 3", string("") + "12");
}

TEST(abc225_problemG, case2) {
	check(string("") + "3 3 100\n" + "1 1 1\n" + "1 1 1\n" + "1 1 1", string("") + "0");
}

TEST(abc225_problemG, case3) {
	check(string("") + "8 9 970861213\n" +
			  "1313462 943495812 203775264 839015475 115668311 14701110 "
			  "819458175 827176922 236492592\n" +
			  "843915104 786367010 344840288 618248834 824858165 549189141 "
			  "120648070 805825275 933750119\n" +
			  "709330492 38579914 890555497 75314343 238373458 854061807 "
			  "637519536 53226153 627677130\n" +
			  "671706386 380984116 221773266 787763728 639374738 298691145 "
			  "359138139 183373508 524415106\n" +
			  "716502263 150803008 390520954 913021901 553285119 876389099 "
			  "952721235 46809105 635239775\n" +
			  "355621458 511843148 117663063 37274476 891025941 832254337 "
			  "346436418 783134705 488516288\n" +
			  "383723241 322408013 948364423 409068145 120813872 697127655 "
			  "968230339 988041557 222591780\n" +
			  "712959990 233114128 210373172 798667159 568746366 579461421 "
			  "923556823 777007925 422249456",
		  string("") + "9785518299");
}