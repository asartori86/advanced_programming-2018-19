CXX=c++
CXXFLAGS = -Wall -Wextra -std=c++14

default: as_vector.x

.PHONY: default

as_vector.x: as_vector.cc
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f as_vector.x *~

.PHONY: clean
