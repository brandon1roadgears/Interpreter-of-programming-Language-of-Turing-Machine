CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean

all: goal1 goal2 bin/turing.exe
	
goal1:
	mkdir -p bin
goal2: 
	mkdir -p build


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin

