object := hello.o main.o
CC := gcc
main: hello.o main.o hello.h
	gcc $(object) -o main
hello.o: hello.c hello.h
main.o: main.c hello.h
clean:
	rm main *.o
.PHONY: clean