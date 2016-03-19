all: main.o selectionSort.o bubbleSort.o quickSort.o
	gcc -o sort main.o selectionSort.o bubbleSort.o quickSort.o

main.o: main.c
	gcc -c main.c

selectionSort.o: selectionSort.c
	gcc -c selectionSort.c

bubbleSort.o: bubbleSort.c
	gcc -c bubbleSort.c

quickSort.o: quickSort.c
	gcc -c quickSort.c

clean:
	rm main.o selectionSort.o bubbleSort.o quickSort.o sort
