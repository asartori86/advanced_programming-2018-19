CC = cc
CXX = c++
EXE = exe

all: $(EXE)

$(EXE): cpp2c.o
	$(CC) main.c $^ -lstdc++ -o $@

cpp2c.o: cpp2c.cc
	$(CXX) -std=c++11 -c $< -o $@

clean:
	rm -f *~ *.o $(EXE)

.PHONY: all clean format


format: cpp2c.cc main.c
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"
