SRC_DIR=./src
TEST_DIR=./test
CC=g++
LIBS=-lgtest -lgtest_main
OBJS=test_practiceA practiceA 

all:	$(OBJS)

test_practiceA:	$(TEST_DIR)/test_practiceA.cpp $(TEST_DIR)/command.h
	$(CC) $(^) -o $(@) $(LIBS)

practiceA:	$(SRC_DIR)/practiceA.cpp
	$(CC) $(^) -o $(@)

clean:
	rm -f $(OBJS)
