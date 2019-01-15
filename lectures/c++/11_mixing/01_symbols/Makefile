SRC = 01_hello.c 02_exp.c 03_visibility.c
CC = cc

SUFFIXES=

all: 

format: $(SRC) 
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"

clean:
	@rm -f *~ *.x

.PHONY: clean all format
