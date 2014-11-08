INC=-I../common-inc -Iinclude
LIB=lib
OBJ=obj
CC=./tinycc/tcc
LIBC=./tinycc/libc/string.a ./tinycc/libtcc1.a

sulogin: tcc strutils.o fixes
	$(CC) sulogin.c $(OBJ)/strutils.o $(OBJ)/mallocr.o $(OBJ)/impure.o $(LIBC) -o sulogin $(INC) -lcrypt

strutils.o:
	$(CC) -c $(LIB)/strutils.c -o $(OBJ)/strutils.o $(INC)

fixes:
	$(CC) -c $(LIB)/mallocr.c -o $(OBJ)/mallocr.o $(INC)
	$(CC) -c $(LIB)/impure.c -o $(OBJ)/impure.o $(INC)

tcc:
	cd tinycc; ./configure --cc=../../tcc-orig-bin/tcc
	cd tinycc; make

.PHONY: clean
clean:
	-rm sulogin $(OBJ)/*
	cd tinycc; make clean
