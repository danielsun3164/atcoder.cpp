#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex26";

TEST(apg4b_ex26, case1) {
	check(PATH + COMMAND,
			string("") + "4\n" + "int x = 1 + 2 ;\n" + "print_int x + 3 ;\n" + "vec a = [ 1 , 2 , x ] ;\n"
					+ "print_vec a + [ 4 , 5 , 6 ] ;", string("") + "6\n" + "[ 5 7 9 ]");
}

TEST(apg4b_ex26, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "print_int 1 - 2 ;\n" + "print_vec [ 1 , 2 , 3 ] - [ 3 , 2 , 1 ] ;",
			string("") + "-1\n" + "[ -2 0 2 ]");
}

TEST(apg4b_ex26, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "print_int 5 ;", string("") + "5");
}

TEST(apg4b_ex26, case4) {
	check(PATH + COMMAND, string("") + "1\n" + "print_vec [ 1 , 2 ] ;", string("") + "[ 1 2 ]");
}

TEST(apg4b_ex26, case5) {
	check(PATH + COMMAND, string("") + "2\n" + "int x = 1 ;\n" + "print_int x ;", string("") + "1");
}

TEST(apg4b_ex26, case6) {
	check(PATH + COMMAND, string("") + "2\n" + "vec a = [ 3 , 4 ] ;\n" + "print_vec a ;", string("") + "[ 3 4 ]");
}

TEST(apg4b_ex26, case7) {
	check(PATH + COMMAND, string("") + "4\n" + "int x = 1 ;\n" + "int y = 2 ;\n" + "int z = 3 ;\n" + "print_int x + y + z ;",
			string("") + "6");
}

TEST(apg4b_ex26, case8) {
	check(PATH + COMMAND,
			string("") + "4\n" + "vec a = [ 1 , 2 , 3 ] ;\n" + "vec b = [ 4 , 5 , 6 ] ;\n" + "vec c = [ 7 , 8 , 9 ] ;\n"
					+ "print_vec a + b + c ;", string("") + "[ 12 15 18 ]");
}

TEST(apg4b_ex26, case9) {
	check(PATH + COMMAND,
			string("") + "6\n" + "vec a = [ 1 , 2 ] ;\n" + "vec b = a + [ 3 , 4 ] ;\n" + "vec c = a - [ 5 , 6 ] ;\n"
					+ "print_vec a ;\n" + "print_vec b ;\n" + "print_vec c ;",
			string("") + "[ 1 2 ]\n" + "[ 4 6 ]\n" + "[ -4 -4 ]");
}
