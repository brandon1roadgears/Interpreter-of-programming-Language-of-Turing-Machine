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

bin/turing.exe: build/src/main.o build/src/check_error.o build/src/input_main_row.o build/src/input_rules.o build/src/move.o build/src/print_string.o build/src/run.o build/src/do_s.o build/src/hello_user.o build/src/pointer.o
	$(COMPILER) $(CFLAGS) $^ -o $@

build/src/main.o: src/main.cpp src/head.h
	$(OBJ)

build/src/check_error.o: src/check_error.cpp src/head.h
	$(OBJ)

build/src/input_main_row.o: src/input_main_row.cpp src/head.h
	$(OBJ)

build/src/input_rules.o: src/input_rules.cpp src/head.h
	$(OBJ)

build/src/move.o: src/move.cpp src/head.h
	$(OBJ)

build/src/print_string.o: src/print_string.cpp src/head.h
	$(OBJ)

build/src/run.o: src/run.cpp src/head.h
	$(OBJ)

build/src/do_s.o: src/do_s.cpp src/head.h
	$(OBJ)

build/src/hello_user.o: src/hello_user.cpp src/head.h
	$(OBJ)

build/src/pointer.o: src/pointer.cpp src/head.h
	$(OBJ)

bin/turing-test: build/test/test.o build/test/check_error-test.o build/test/do_s-test.o build/test/move-test.o build/test/print_string-test.o
	$(COMPILER) $(CFLAGS) $^ -o $@

build/test/test.o: test/test.cpp test/turing-test-head.h
	$(TOBJT)

build/test/check_error-test.o: test/check_error-test.cpp test/turing-test-head.h
	$(TOBJT)

build/test/do_s-test.o: test/do_s-test.cpp test/turing-test-head.h
	$(TOBJT)

build/test/move-test.o: test/move-test.cpp test/turing-test-head.h
	$(TOBJT)

build/test/print_string-test.o: test/print_string-test.cpp test/turing-test-head.h
	$(TOBJT)

run-app: bin/turing.exe
	./bin/turing.exe
clean:
	rm -R build/src/*.o
	rm -R bin/turing.exe
	rm -R bin/turing-test
	rm -R build
	rm -R bin
