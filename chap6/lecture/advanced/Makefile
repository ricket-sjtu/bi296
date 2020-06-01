CC = gcc
CFLAGS = -I.
DEPS = hellofunc.h

OBJ := hello.o
OBJ += hellofunc.o

# Compiles each of the object files as separate targets
%.o: %.c $(DEPS)
	@echo $<
	$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o hello
