CFLAGS = -Wall -Werror
COMPILER = g++ -std=c++11
OBJ = $(COMPILER) $(CFLAGS) -c $< -o $@
TOBJT = $(COMPILER) $(CFLAGS) -I for_test_special/catch2 -c $< -o $@

.PHONY: clean
 
all: goal1 goal2 test3 test4 bin/turing.exe
	
goal1:
	mkdir -p bin

goal2: 
	mkdir -p build

test3:
	mkdir -p build/src

test4:
	mkdir -p build/test

bin/turing.exe: build/main.o build/check_error.o build/input_main_row.o build/input_rules.o build/move.o build/print_string.o build/run.o build/do_s.o
	$(COMPILER) $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/head.h
	$(OBJ)

build/check_error.o: src/check_error.cpp src/head.h
	$(OBJ)
	
build/input_main_row.o: src/input_main_row.cpp src/head.h
	$(OBJ)

build/input_rules.o: src/input_rules.cpp src/head.h
	$(OBJ)

build/move.o: src/move.cpp src/head.h
	$(OBJ)

build/print_string.o: src/print_string.cpp src/head.h
	$(OBJ)

build/run.o: src/run.cpp src/head.h
	$(OBJ)

build/do_s.o: src/do_s.cpp src/head.h
	$(OBJ)

clean:
	rm -R build
	rm -R bin

