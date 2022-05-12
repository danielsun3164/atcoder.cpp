include ../CCOptions
OBJS=test_problemA problemA test_problemB problemB

all:	$(OBJS)

test_problemA:	$(TEST_DIR)/test_problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemA:	$(SRC_DIR)/problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemB:	$(TEST_DIR)/test_problemB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemB:	$(SRC_DIR)/problemB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
