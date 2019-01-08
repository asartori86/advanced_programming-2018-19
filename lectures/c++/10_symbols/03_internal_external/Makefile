SRC = $(wildcard *.cc)
CXXFLAGS = -g -std=c++11 -Wall -Wextra
EXE = exe
OBJ = $(SRC:.cc=.o)
INC = $(wildcard *.h)

all: $(EXE)

$(EXE): $(OBJ)
	g++ -o $@ $^

%.o: %.cc 
	$(CXX) -c $< -o $@ $(CXXFLAGS)

format: $(SRC) $(INC)
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"

clean:
	rm -f $(EXE) *~ $(OBJ)

.PHONY: clean all format


