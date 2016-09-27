CXXFLAGS = -Wall -Wextra
DEP = mystring.h

all: test

test: mystring_tester.o mystring.o
	$(LINK.cc) $^ -o $@

mystring_tester.o: mystring_tester.cpp mystring.hpp

mystring.o: mystring.cpp mystring.hpp

clean:
	$(RM) test *.o *.-
