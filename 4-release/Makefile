INC=-I../common-inc -Iinclude
LIB=lib
OBJ=obj
CC=./tcc-orig/tcc
LIBC=./tcc-orig/libc/string.a ./tcc-orig/libtcc1.a

sulogin: tcc strutils.o fixes
	$(CC) sulogin.c $(OBJ)/strutils.o $(OBJ)/mallocr.o $(OBJ)/impure.o $(LIBC) -o sulogin $(INC) -lcrypt

strutils.o:
	$(CC) -c $(LIB)/strutils.c -o $(OBJ)/strutils.o $(INC)

fixes:
	$(CC) -c $(LIB)/mallocr.c -o $(OBJ)/mallocr.o $(INC)
	$(CC) -c $(LIB)/impure.c -o $(OBJ)/impure.o $(INC)

tcc:
	cd tcc-orig; ./configure --cc=../malicious-tcc
	cd tcc-orig; make

.PHONY: clean
clean:
	-rm sulogin $(OBJ)/*
	cd tcc-orig; make clean
