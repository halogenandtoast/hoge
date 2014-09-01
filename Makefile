SRC=main.c editor.c
CC=cc

all: hoge

hoge: ${SRC}
	${CC} -o hoge ${SRC}
