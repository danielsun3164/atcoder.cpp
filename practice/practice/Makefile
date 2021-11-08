include ../CCOptions
OBJS=test_practiceA practiceA test_practiceB practiceB

all:	$(OBJS)

test_practiceA:	$(TEST_DIR)/test_practiceA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

practiceA:	$(SRC_DIR)/practiceA.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_practiceB:	$(TEST_DIR)/test_practiceB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

practiceB:	$(SRC_DIR)/practiceB.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
