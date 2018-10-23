SRC = 01_enum.cc                    \
      02_scoped_enum.cc             \
      03_why_scoped.cc              \
      04_namespace.cc               \
      05_struct_class.cc            \
      06_constructor_destructor.cc  \
      07_template_class.cc

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

01_enum.x : CXXFLAGS += -Wno-unused-variable
02_scoped_enum.x : CXXFLAGS += -Wno-unused-variable
05_struct_class.x : CXXFLAGS += -Wno-unused-but-set-variable -Wno-unknown-warning-option
