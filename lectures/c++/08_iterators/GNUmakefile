CXX=c++
CXXFLAGS= -Wall -Wextra -std=c++11 -O3

SRC=as_linked_list.cc
EXE=$(SRC:.cc=.x)

all: $(EXE)

%.x:%.cc
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf *~ $(EXE)

.PHONY: clean all

