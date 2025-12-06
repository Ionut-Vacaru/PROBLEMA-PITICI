main: main.o functii.o 
	clang main.o functii.o -Wall -o main
main.o: main.c header.h
	clang -c main.c -Wall
functii.o: functii.c header.h
	clang -c functii.c -Wall

.PHONY: clean 

clean: 
	rm -f *.o
	rm main
