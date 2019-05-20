.PHONY:all clean
CC=gcc
CFLAGS=-Wall -Werror
SD=src/
OD=build/
OTD=build/test/
A=test/
EXECUTABLE=bin/geometry.exe
EXECUTABLE_2=bin/test_geometry
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)main.o $(OD)perimetr.o $(OD)square.o $(OD)cross.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)perimetr.o $(OD)square.o $(OD)cross.o -lm
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c -lm
$(OD)perimetr.o: $(SD)perimetr.c
	$(CC) $(CFLAGS) -c -o $(OD)perimetr.o $(SD)perimetr.c -lm
$(OD)square.o: $(SD)square.c
	$(CC) $(CFLAGS) -c -o $(OD)square.o $(SD)square.c -lm
$(OD)cross.o: $(SD)cross.c
	$(CC) $(CFLAGS) -c -o $(OD)cross.o $(SD)cross.c -lm
test:$(EXECUTABLE_2)

$(EXECUTABLE_2):$(OTD)main.o $(OTD)perimetr.o $(OTD)square.o $(OTD)cross.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE_2) $(OTD)main.o $(OTD)perimetr.o $(OTD)square.o $(OTD)cross.o -lm
$(OTD)main.o: $(A)main.c
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(A)main.c -o $(OTD)main.o  -lm
$(OTD)perimetr.o: $(SD)perimetr.c $(SD)foo.h
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(SD)perimetr.c -o $(OTD)perimetr.o  -lm
$(OTD)square.o: $(SD)square.c $(SD)foo.h
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(SD)square.c -o $(OTD)square.o  -lm
$(OTD)cross.o: $(SD)cross.c $(SD)foo.h
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(SD)cross.c -o $(OTD)cross.o  -lm
clean:
	rm -rf $(OD)*.o $(EXECUTABLE) $(EXECUTABLE_2)
