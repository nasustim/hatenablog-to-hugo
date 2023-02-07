.PHONY: build run fulltest

build:
	./env g++ \
		main.cpp \
		lib/file/read.cpp \
		lib/hatenablog/movabletype.cpp \
		lib/hugo/article.cpp

run: a.out
	./env ./a.out

fulltest:
	./fulltest