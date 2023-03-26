include ../CCOptions
OBJS=test_problemA problemA

all:	$(OBJS)

test_problemA:	$(TEST_DIR)/test_problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemA:	$(SRC_DIR)/problemA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
