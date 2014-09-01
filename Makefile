CC=cc
SRC=main.c
all: hoge

hoge: ${SRC}
	${CC} -o hoge ${SRC}
