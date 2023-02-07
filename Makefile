.PHONY: build run fulltest

build:
	./env g++ \
		main.cpp \
		lib/file/read.cpp \
		lib/hatenablog/movabletype.cpp

run: a.out
	./env ./a.out

fulltest:
	./env ./fulltest