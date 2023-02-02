.PHONY: build run fulltest

build:
	./env g++ \
		main.cpp \
		lib/file/read.cpp

run: a.out
	./env ./a.out

fulltest:
	./fulltest