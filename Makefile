.PHONY:	all clean
CC=g++
CFLAGS= -Wall -Werror
SD=src/
OD=build/
EXECUTABLE=bin/geometry.exe
all: $(EXECUTABLE)
$(EXECUTABLE): $(OD)main.o $(OD)perimetr.o $(OD)square.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)perimetr.o $(OD)square.o
$(OD)main.o: $(SD)main.cpp
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.cpp -lm
$(OD)perimetr.o: $(SD)perimetr.cpp
	$(CC) $(CFLAGS) -c -o $(OD)perimetr.o $(SD)perimetr.cpp -lm
$(OD)square.o: $(SD)square.cpp
	$(CC) $(CFLAGS) -c -o $(OD)square.o $(SD)square.cpp -lm
clean: 
	rm -rf $(OD)*.o $(EXECUTABLE) $(EXECUTABLE_2)
