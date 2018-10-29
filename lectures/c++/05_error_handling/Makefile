SRC = 00_errno.cc            \
      01_exceptions.cc       \
      02_exceptions.cc       \
      03_error.cc            \
      04_assert.cc           \
      05_stack_unwinding.cc  \
      06_smart_pointers.cc   

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

03_error.x: ap_error.h
04_assert.x: ap_error.h
05_stack_unwinding.x: ap_error.h
06_smart_pointers.x: ap_error.h

format: ap_error.h
