include ../../CCOptions
OBJS=test_problemA problemA test_problemB problemB test_problemC problemC test_problemD problemD test_problemE problemE test_problemF problemF test_problemF別回答 problemF別回答

all:	$(OBJS)

test_problemA:	$(TEST_DIR)/test_problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemA:	$(SRC_DIR)/problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemB:	$(TEST_DIR)/test_problemB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemB:	$(SRC_DIR)/problemB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemC:	$(TEST_DIR)/test_problemC.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemC:	$(SRC_DIR)/problemC.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemD:	$(TEST_DIR)/test_problemD.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemD:	$(SRC_DIR)/problemD.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemE:	$(TEST_DIR)/test_problemE.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemE:	$(SRC_DIR)/problemE.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemF:	$(TEST_DIR)/test_problemF.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemF:	$(SRC_DIR)/problemF.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemF別回答:	$(TEST_DIR)/test_problemF別回答.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemF別回答:	$(SRC_DIR)/problemF別回答.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
