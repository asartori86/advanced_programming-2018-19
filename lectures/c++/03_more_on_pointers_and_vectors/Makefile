SRC = 01_auto.cc                 \
      02_const_and_pointers.cc   \
      03_special_pointers.cc     \
      04_command_line_args.cc    \
      05_matrices.cc             \
      06_std_arrays.cc           \
      07_std_vectors.cc

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

01_auto.x : CXXFLAGS += -Wno-unused-variable
02_const_and_pointers.x : CXXFLAGS += -Wno-unused-variable
03_special_pointers.x : CXXFLAGS += -Wno-unused-variable -Wno-unused-but-set-variable -Wno-uninitialized
