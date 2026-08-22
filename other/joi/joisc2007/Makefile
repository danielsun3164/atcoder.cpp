include ../CCOptions
OBJS=test_problemA_score problemA_score test_problemB_factorial problemB_factorial \
 test_problemC_mall problemC_mall test_problemD_building problemD_building test_problemE_fermat \
 problemE_fermat problemF_salt test_problemF_salt test_problemG_anagram problemG_anagram \
 test_problemH_route problemH_route test_problemI_circuit problemI_circuit test_problemJ_fiber \
 problemJ_fiber test_problemK_lines problemK_lines problemL_packing1 problemM_packing2 \
 problemN_packing3 problemO_packing4 problemP_packing5

all:	$(OBJS)

test_problemA_score:	$(TEST_DIR)/test_problemA_score.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemA_score:	$(SRC_DIR)/problemA_score.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemB_factorial:	$(TEST_DIR)/test_problemB_factorial.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemB_factorial:	$(SRC_DIR)/problemB_factorial.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemC_mall:	$(TEST_DIR)/test_problemC_mall.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemC_mall:	$(SRC_DIR)/problemC_mall.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemD_building:	$(TEST_DIR)/test_problemD_building.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemD_building:	$(SRC_DIR)/problemD_building.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemE_fermat:	$(TEST_DIR)/test_problemE_fermat.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemE_fermat:	$(SRC_DIR)/problemE_fermat.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemF_salt:	$(SRC_DIR)/problemF_salt.cpp $(SRC_DIR)/problemF_salt/grader.cpp
	$(CC) -Og -g -std=gnu++11 -Wall -Wextra $(^) -o $(@) $(INCLUDE) -I$(SRC_DIR)/problemF_salt

test_problemF_salt:	$(TEST_DIR)/test_problemF_salt.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

test_problemG_anagram:	$(TEST_DIR)/test_problemG_anagram.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemG_anagram:	$(SRC_DIR)/problemG_anagram.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemH_route:	$(TEST_DIR)/test_problemH_route.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemH_route:	$(SRC_DIR)/problemH_route.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemI_circuit:	$(TEST_DIR)/test_problemI_circuit.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemI_circuit:	$(SRC_DIR)/problemI_circuit.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemJ_fiber:	$(TEST_DIR)/test_problemJ_fiber.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemJ_fiber:	$(SRC_DIR)/problemJ_fiber.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

test_problemK_lines:	$(TEST_DIR)/test_problemK_lines.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE) $(LIBS)

problemK_lines:	$(SRC_DIR)/problemK_lines.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemL_packing1:	$(SRC_DIR)/problemL_packing1.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemM_packing2:	$(SRC_DIR)/problemM_packing2.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemN_packing3:	$(SRC_DIR)/problemN_packing3.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemO_packing4:	$(SRC_DIR)/problemO_packing4.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

problemP_packing5:	$(SRC_DIR)/problemP_packing5.cpp
	$(CC) $(CFLAGS) $(^) -o $(@) $(INCLUDE)

clean:
	rm -f $(OBJS)
