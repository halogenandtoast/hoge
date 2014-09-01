SRC=main.c editor.c
LDLIBS=-llua -lncurses

all: hoge

hoge: ${SRC}
	${CC} -o hoge ${SRC} ${LDLIBS}

clean:
	rm -rf hoge
