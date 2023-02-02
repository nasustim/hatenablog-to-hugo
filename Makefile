.PHONY: build run

build:
	./env g++ \
		main.cpp \
		lib/file/read.cpp

run: a.out
	./env ./a.out