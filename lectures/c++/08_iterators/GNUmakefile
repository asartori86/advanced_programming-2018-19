CXX=c++
CXXFLAGS= -Wall -Wextra -std=c++11 -O3

SRC=as_linked_list.cc
EXE=$(SRC:.cc=.x)

all: $(EXE)

%.x:%.cc
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf *~ $(EXE)

format: $(SRC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"


.PHONY: clean all

