EXE = exe.x
CXX = c++
CFLAGS = -I include -g -std=c++11 -Wall -Wextra -I ../../../lectures/04_error_handling/

SRC= main.cc src/dog.cc src/animal.cc src/snake.cc src/helper_functions.cc
OBJ=$(SRC:.cc=.o)
INC = $(wildcard *.h)

all: $(EXE)

clean:
	$(info clean up)
	@rm -rf $(OBJ) $(EXE) src/*~ include/*~ *~ html latex

.PHONY: clean

%.o: %.cc
	$(CXX) -c $< -o $@ $(CFLAGS)

$(EXE): $(OBJ)
	$(CXX) $^ -o $(EXE)

documentation: Doxygen/doxy.in
	doxygen $^


main.o: include/dog.h include/animal.h include/snake.h \
 include/helper_functions.h

src/animal.o: include/animal.h 

src/dog.o: include/animal.h include/dog.h
src/snake.o: include/animal.h include/snake.h
src/helper_functions.o: include/animal.h include/helper_functions.h

format: $(SRC) $(INC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"


