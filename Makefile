
output: test6.o StackArray.o StackLinked.o
	g++ test6.o StackArray.o StackLinked.o -o test6

test6.o: test6.cpp
	g++ -c test6.cpp

StackArray.o: StackArray.cpp StackArray.h
	g++ -c StackArray.cpp 

StackLinked.o: StackLinked.cpp StackLinked.h
	g++ -c StackLinked.cpp

clean:
	rm *.o test6
