CC     := g++
CFLAGS := -g -O0
EXE    := refs pointers
all : refs pointers
refs : refs.cpp
pointers : pointers.cpp
clean :
	rm -f pointers refs *~
