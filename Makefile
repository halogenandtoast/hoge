SRC=main.c editor.c
LDLIBS=-llua

all: hoge

hoge: ${SRC}
	${CC} -o hoge ${SRC} ${LDLIBS}

clean:
	rm -rf hoge
