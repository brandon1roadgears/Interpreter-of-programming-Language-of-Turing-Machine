CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean
 
all: goal1 goal2 bin/turing.exe
	
goal1:
	mkdir -p build

goal2: 
	mkdir -p bin

bin/turing.exe: build/main.o build/checkerror.o build/input_main_row.o build/input_rules.o build/move.o build/printstring.o build/RUN.o
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/head.h
	$(OBJ)

build/checkerror.o: src/checkerror.cpp src/head.h
	$(OBJ)
	
build/input_main_row.o: src/input_main_row.cpp src/head.h
	$(OBJ)

build/input_rules.o: src/input_rules.cpp src/head.h
	$(OBJ)

build/move.o: src/move.cpp src/head.h
	$(OBJ)

build/printstring.o: src/printstring.cpp src/head.h
	$(OBJ)

build/RUN.o: src/RUN.cpp src/head.h
	$(OBJ)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin

