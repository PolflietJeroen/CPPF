CXXFLAGS = -Wall -Wextra

all: test #complex

test: test.o complex.o
	$(LINK.cc) $^ -o $@

complex: complex.o
	$(LINK.cc) $^ -o $@
