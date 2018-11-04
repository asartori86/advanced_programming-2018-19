SRC = 01_surprise.cc      \
      02_default.cc       \
      03_default.cc       \
      04_buggy_vector.cc  \
      05_buggy_vector.cc  \
      06_copy_move.cc     \
      07_copy_on_write.cc

CXX = c++
CXXFLAGS = -Wall -Wextra -g -std=c++11

CXXFLAGS += -I ../05_error_handling  # needed by the compiler to find the header

VPATH = ../05_error_handling # needed by makefile to look for files

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

05_copy_move.x: ap_error.h
