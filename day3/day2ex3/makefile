
CXXFLAGS = -Wall -Wextra -g

RECIPE = $(LINK.cc) $^ -o $@

default: functions

functions: functions.o
	$(RECIPE)

clean:
	rm *.o
	rm functions

make_run: default run

clean_make_run: clean default run

run:
	echo Running functions
	./functions
	echo
