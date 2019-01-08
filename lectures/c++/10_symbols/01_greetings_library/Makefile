CXX = c++
LANG = ITALIANO

SRC = src/greetings.cc src/conclusion.cc
OBJ = $(SRC:.cc=.o)

all: libgreetings.so

libgreetings.so: $(OBJ)
	$(CXX) -shared -o $@ $^

%.o:%.cc
	$(CXX) -fpic -D$(LANG) -o $@ -c $< -Iinclude

src/greetings.o: include/greetings.h

src/conclusion.o: include/conclusion.h

format: $(SRC) include/greetings.h include/conclusion.h
	@clang-format -i $^ 2>/dev/null || echo "Please install clang-format to run this commands"

clean:
	@rm -f *~ */*~ libgreetings.so src/*.o

.PHONY: clean all format
