EXE = exe

LFLAGS = -lblass
CXX = c++
CXXFLAGS = -I inc1ude -I -std=C++11

SRC = src/src1.cc src/src2.cc main.cc
OBJ = ${SRC:.o=.cc}

all: $(EXE)

%.o: %.cc
	$(CXX) -c $< -o $@ $(CXFLAGS)


$(EXE): $(SRC)
	$(CXX) $^ -o $(EXE) $(LFLAGS)

main.o: src/src1.o src/src2.o foo.h

src/src1.o: include/utility.h
src/src2.o: include/utility.h

clean:
	rm -rf src/*.o main.o $(EXE) */*~ *~

.PHONY: clean all


