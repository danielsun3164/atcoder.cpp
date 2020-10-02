SRC_DIR=./src
TEST_DIR=./test
CC=g++
CFLAGS=-Og -g
LIBS=-lgtest -lgtest_main
OBJS=test_problemA problemA test_problemB problemB test_problemC problemC test_problemD problemD test_problemE problemE  

all:	$(OBJS)

test_problemA:	$(TEST_DIR)/test_problemA.cpp $(TEST_DIR)/command.h
	$(CC) $(CFLAGS) $(^) -o $(@) $(LIBS)

problemA:	$(SRC_DIR)/problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@)

test_problemB:	$(TEST_DIR)/test_problemB.cpp $(TEST_DIR)/command.h
	$(CC) $(CFLAGS) $(^) -o $(@) $(LIBS)

problemB:	$(SRC_DIR)/problemB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@)

test_problemC:	$(TEST_DIR)/test_problemC.cpp $(TEST_DIR)/command.h
	$(CC) $(CFLAGS) $(^) -o $(@) $(LIBS)

problemC:	$(SRC_DIR)/problemC.cpp
	$(CC) $(CFLAGS) $(^) -o $(@)

test_problemD:	$(TEST_DIR)/test_problemD.cpp $(TEST_DIR)/command.h
	$(CC) $(CFLAGS) $(^) -o $(@) $(LIBS)

problemD:	$(SRC_DIR)/problemD.cpp
	$(CC) $(CFLAGS) $(^) -o $(@)

test_problemE:	$(TEST_DIR)/test_problemE.cpp $(TEST_DIR)/command.h
	$(CC) $(^) -o $(@) $(LIBS)

problemE:	$(SRC_DIR)/problemE.cpp
	$(CC) $(CFLAGS) $(^) -o $(@)

clean:
	rm -f $(OBJS)
