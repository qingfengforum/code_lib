
CC = gcc

C_SRC = $(wildcard *.c)
C_OBJ = $(C_SRC:%.c=%.o)
C_BIN = $(C_SRC:%.c=%)

all:$(C_OBJ)

%.o:%.c
	$(CC) $< -o $*

.PHONY:clean
clean:
	rm -rf *.o $(C_BIN) 
