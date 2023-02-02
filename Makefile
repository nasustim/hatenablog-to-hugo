.PHONY: build run

build:
	./env g++ main.cpp

run: a.out
	./env ./a.out