OBJ             = demo.o demo_test.o gtest/gtest-all.o
CXXFLAGS        = -std=c++11 -O -g -Wall -Werror -I.
LDFLAGS         = -g
LIBS            = -lpthread

all:            demo

demo:           $(OBJ)
		$(CXX) $(LDFLAGS) $(OBJ) $(LIBS) -o $@

clean:
		rm -f *.o gtest/*.o demo

test:           demo
		./demo
