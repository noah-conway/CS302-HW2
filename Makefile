
output: test6.o StackArray.o StackLinked.o StackNode.o
	g++ test6.o StackArray.o StackLinked.o StackNode.o -o test6

StackNode.o: StackNode.cpp StackNode.h
	g++ -c StackNode.cpp

StackArray.o: StackArray.cpp StackArray.h
	g++ -c StackArray.cpp 

StackLinked.o: StackLinked.cpp StackLinked.h
	g++ -c StackLinked.cpp

test6.o: test6.cpp config.h
	g++ -c test6.cpp


clean:
	rm *.o test6
