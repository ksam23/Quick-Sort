test: main.o QuickSort.o
	g++ main.o QuickSort.o -o test

main.o: main.cpp QuickSort.h
	g++ -c main.cpp

QuickSort.o: QuickSort.cpp QuickSort.h
	g++ -c QuickSort.cpp

clean: 
	rm -f *.o test

