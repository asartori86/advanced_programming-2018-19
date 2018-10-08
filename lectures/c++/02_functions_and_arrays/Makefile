SRC = 01_functions.cc             \
      02_templates.cc             \
      03_wrong_args.cc            \
      04_vars_pointers_refs.cc    \
      05_swaps.cc                 \
      06_static_arrays.cc         \
      07_dynamic_arrays.cc

CXX = c++
CXXFLAGS = -Wall -Wextra -g -std=c++11

EXE = $(SRC:.cc=.x)

# eliminate default suffixes
.SUFFIXES:
SUFFIXES =

# just consider our own suffixes
.SUFFIXES: .cc .x

all: $(EXE)

.PHONY: all

%.x: %.cc 
	$(CXX) $< -o $@ $(CXXFLAGS)

format: $(SRC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this command"

.PHONY: format

clean:
	rm -f $(EXE) *~

.PHONY: clean
