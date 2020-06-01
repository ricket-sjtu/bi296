CC = /usr/bin/gcc
CFLAGS = -g -Wall -O0
LINKER_FLAGS = -lm

.PHONY : all
all: test env
test: test.c
	$(CC) $(CFLAGS) -o $@ $<
env:
	@echo CC=$(CC) 
