INC=-I../common-inc -Iinclude
LIB=lib
OBJ=obj
CCORIG=./tcc-orig/tcc
LIBC=./tcc-orig/libc/string.a ./tcc-orig/libtcc1.a

sulogin: tccorig strutils.o fixes
	$(CCORIG) sulogin.c $(OBJ)/strutils.o $(OBJ)/mallocr.o $(OBJ)/impure.o $(LIBC) -o sulogin $(INC) -lcrypt

strutils.o:
	$(CCORIG) -c $(LIB)/strutils.c -o $(OBJ)/strutils.o $(INC)

fixes:
	$(CCORIG) -c $(LIB)/mallocr.c -o $(OBJ)/mallocr.o $(INC)
	$(CCORIG) -c $(LIB)/impure.c -o $(OBJ)/impure.o $(INC)

tccorig: tccnew
	cd tcc-orig; ./configure --cc=../tcc-new/tcc
	cd tcc-orig; make

tccnew:
	cd tcc-new; ./configure --cc=../../tcc-orig-bin/tcc
	cd tcc-new; make

.PHONY: clean
clean:
	-rm sulogin $(OBJ)/*
	cd tcc-orig; make clean
	cd tcc-new; make clean
