CXXFLAGS = -Wall -Wextra
DEP = mystring.h

all: test

test: test.o shape.o square.o triangle.o circle.o
	$(LINK.cc) $^ -o $@

test.o: test.cpp shape.h square.h triangle.h circle.h

shape.o: shape.cpp shape.h square.h triangle.h circle.h

square.o: square.cpp shape.h square.h triangle.h circle.h

circle.o: circle.cpp shape.h square.h triangle.h circle.h

triangle.o: triangle.cpp shape.h square.h triangle.h circle.h


clean:
	$(RM) test *.o *.-
