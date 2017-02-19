all: *.c *.h
	gcc -O3 *.c -Wall -levent -lcrypto -pthread -lm -D_GNU_SOURCE -std=c99 -o loader

clean:
	rm loader
