CXX = g++
cc = gcc

LIB = -lpthread -ldl
BIN = sqlite app

all: $(BIN)

sqlite: sqlite3/sqlite3.c sqlite3/shell.c
	$(cc) -o $@ $^ $(LIB) 

sqlite3.o: sqlite3/sqlite3.c
	$(cc) -o $@ -c $^

app: main.cpp sqlite3.o
	$(CXX) -o $@ $^ $(LIB) 

clean:
	rm -f $(BIN)

.PHONY: all, clean
