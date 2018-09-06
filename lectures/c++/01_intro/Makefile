CXX = c++
CXXFLAGS = -Wall -Wextra -g -std=c++11

SRC = $(wildcard *.cc)
EXE = $(SRC:.cc=.x)

.SUFFIXES:
.SUFFIXES: .cc .x

all: $(EXE)

%.x: %.cc
	$(CXX) $< -o $@ $(CXXFLAGS)

format: $(SRC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this command"

clean:
	rm -f $(EXE) *~

.PHONY: clean
