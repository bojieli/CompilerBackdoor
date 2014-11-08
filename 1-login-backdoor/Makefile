INC=-I../common-inc
LIB=lib
OBJ=obj
CC=../tcc-orig-bin/tcc
LIBC=../tcc-orig-bin/libc/string.a

sulogin: strutils.o fixes
	$(CC) sulogin.c $(OBJ)/strutils.o $(OBJ)/mallocr.o $(OBJ)/impure.o $(LIBC) -o sulogin $(INC) -lcrypt

strutils.o:
	$(CC) -c $(LIB)/strutils.c -o $(OBJ)/strutils.o $(INC)

fixes:
	$(CC) -c $(LIB)/mallocr.c -o $(OBJ)/mallocr.o
	$(CC) -c $(LIB)/impure.c -o $(OBJ)/impure.o $(INC)

.PHONY: clean
clean:
	-rm sulogin $(OBJ)/*
