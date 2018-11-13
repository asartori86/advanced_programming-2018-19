EXE = exe.x
CXX = c++
CXXFLAGS = -I include -g -std=c++11 -Wall -Wextra -I ../../05_error_handling/

SRC= main.cc src/dog.cc src/animal.cc src/snake.cc src/helper_functions.cc
OBJ=$(SRC:.cc=.o)
INC = include/animal.h  include/dog.h  include/helper_functions.h  include/snake.h

VPATH = ../05_error_handling

# eliminate default suffixes
.SUFFIXES:
SUFFIXES =

# just consider our own suffixes
.SUFFIXES: .cc .o

all: $(EXE)

.PHONY: all

clean:
	$(info clean up)
	@rm -rf $(OBJ) $(EXE) src/*~ include/*~ *~ html latex

.PHONY: clean

%.o: %.cc ap_error.h
	$(CXX) -c $< -o $@ $(CXXFLAGS)

$(EXE): $(OBJ)
	$(CXX) $^ -o $(EXE)

documentation: Doxygen/doxy.in
	doxygen $^

.PHONY: documentation

main.o: include/dog.h include/animal.h include/snake.h \
 include/helper_functions.h

src/animal.o: include/animal.h 

src/dog.o: include/animal.h include/dog.h
src/snake.o: include/animal.h include/snake.h
src/helper_functions.o: include/animal.h include/helper_functions.h

format: $(SRC) $(INC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"

.PHONY: format
