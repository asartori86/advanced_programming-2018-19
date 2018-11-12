SRC = 00_first_trial.cc         \
      01_inheritance.cc         \
      02_virtual.cc             \
      03_virtual_destructor.cc  \
      04_private.cc             \
      05_dynamic_cast.cc


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

%.x: %.cc ap_error.h
	$(CXX) $< -o $@ $(CXXFLAGS)

format: $(SRC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this command"

.PHONY: format

clean:
	rm -f $(EXE) *~

.PHONY: clean

