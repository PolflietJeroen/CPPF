
CXXFLAGS = -Wall -Wextra -std=c++11
LDFLAGS =  -lcppunit

RECIPE = $(LINK.cc) $^ -o $@ 

default: Complex_tests TestCaller_tests 


Complex.o : Complex.h Complex.cpp

ComplexTests.o: ComplexTests.hpp TestCaller.hpp
Complex_tests: CXXFLAGS += -DSUITE_CLASS=3
Complex_tests.o: test.cpp
	$(COMPILE.cc)  $^ -o $@
Complex_tests: Complex_tests.o ComplexTests.o Complex.o
	$(RECIPE)

TestCallerTests.o: TestCallerTests.hpp TestCaller.hpp
TestCaller_tests: CXXFLAGS += -DSUITE_CLASS=4
TestCaller_tests.o: test.cpp
	$(COMPILE.cc)  $^ -o $@
TestCaller_tests: TestCaller_tests.o TestCallerTests.o
	$(RECIPE)



clean:
	rm *.o
	rm Complex_tests TestCaller_tests 

make_run: default run

run:
	echo Running Complex_tests
	./Complex_tests
	echo
	echo Running TestCaller_tests
	./TestCaller_tests
	echo

