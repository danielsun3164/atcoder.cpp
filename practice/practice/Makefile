SRC_DIR=./src
TEST_DIR=./test
CC=g++
CFLAGS=-Og -g
INCLUDE=-I../../include
LIBS=-lgtest -lgtest_main
OBJS=test_practiceA practiceA 

all:	$(OBJS)

test_practiceA:	$(TEST_DIR)/test_practiceA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

practiceA:	$(SRC_DIR)/practiceA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
