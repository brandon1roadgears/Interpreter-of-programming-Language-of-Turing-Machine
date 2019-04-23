CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin

