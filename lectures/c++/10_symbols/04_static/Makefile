SRC = 01_functions.cc 02_members.cc
CXXFLAGS = -std=c++11 -Wall -Wextra
EXE = $(SRC:.cc=.x)

.SUFFIXES:
.SUFFIXES: .cc .x

all: $(EXE)

%.x: %.cc 
	$(CXX) $< -o $@ $(CXXFLAGS)

format: $(SRC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"

clean:
	rm -f $(EXE) *~

.PHONY: clean all format


