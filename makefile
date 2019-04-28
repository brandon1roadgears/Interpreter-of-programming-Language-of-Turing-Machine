CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean
 
all: goal1 goal2 bin/turing.exe
	
goal1:
	mkdir -p bin
goal2: 
	mkdir -p build

bin/turing.exe: build/main.o build/check_error.o build/input_main_row.o build/input_rules.o build/move.o build/print_string.o build/run.o build/check_rules.o
	g++ $(CFLAGS) $^ -o $@

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

build/check_rules.o: src/check_rules.cpp src/head.h
	$(OBJ)
clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin

