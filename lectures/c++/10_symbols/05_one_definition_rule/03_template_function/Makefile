SRC = src1.cc src2.cc main.cc
CXX = c++
CXXFLAGS = -Wall -Wextra -g -std=c++11
OBJ = $(SRC:.cc=.o)
EXE = exe

all: $(EXE)

.PHONY: all

$(EXE): $(OBJ)
	$(CXX) $^ -o $@

%.o: %.cc 
	$(CXX) -c $< -o $@ $(CXXFLAGS)

format: $(SRC) func.h
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this command"

.PHONY: format

clean:
	rm -f $(EXE) *~ $(OBJ)

.PHONY: clean

src1.o: func.h
src2.o: func.h
