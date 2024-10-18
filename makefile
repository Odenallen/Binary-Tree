HOME := $(shell pwd)
.PHONY: bintree all tests
bintree:
	clear
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp tests.h
	

all:
	g++ -o tests -I$(HOME)/cxxtest-4.4 -I$(HOME)/cxxtest-4.4/cxxtest myrunner.cpp
	g++ -o testbalance testbalance.cpp bintree.cpp


tests:
	valgrind ./tests
	valgrind ./testbalance

clean:
	rm tests myrunner.cpp









