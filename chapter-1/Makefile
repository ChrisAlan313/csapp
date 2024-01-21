CC=gcc
CFLAGS=-I. -I../Unity/src
OBJ = numberConversion.o numberConversion_test.o ../Unity/src/unity.o

test: $(OBJ)
	$(CC) -o numberConversion_test $(OBJ)
	./numberConversion_test
	rm 
	*.o
