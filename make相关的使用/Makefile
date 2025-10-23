object := hello.c main.c
main: $(object) hello.h
	gcc main.o hello.o -o main
hello.o: hello.c hello.h

main.o: $(object)

clean:
	rm main