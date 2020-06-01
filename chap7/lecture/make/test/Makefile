SRC = $(wildcard *.c)
OBJS = $(patsubst %.c,%.o,$(SRC))

all:
	-@echo $(SRC)
	-@echo $(OBJS)
	-mkdir libs
	-foreach file in $(OBJS)\
		cp $(file) libs/ \
