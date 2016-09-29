
CXXFLAGS = -Wall -Wextra -g

RECIPE = $(LINK.cc) $^ -o $@

default: complex

complex: ComplexTests.o Complex.o
	$(RECIPE)

clean:
	rm *.o
	rm complex

make_run: default run

run:
	echo Running throw
	./throw
	echo
	echo Running string_main
	./string_main
	echo
	echo Running complex_main
	./complex_main
	echo
