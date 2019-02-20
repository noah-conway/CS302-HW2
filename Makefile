CC=g++
CFLAGS=-I

all: EvaluatePostfix delimiters test6
EvaluatePostfix: EvaluatePostfix.o StackArray.o StackLinked.o StackNode.o
	g++ EvaluatePostfix.o StackArray.o StackLinked.o StackNode.o -o EvaluatePostfix

delimiters: delimiters.o StackArray.o StackLinked.o StackNode.o
	g++ delimiters.o StackArray.o StackLinked.o StackNode.o -o delimiters

delimiters.o: delimiters.cpp config.h
	g++ -c delimiters.cpp

test6: test6.o StackArray.o StackLinked.o StackNode.o
	g++ test6.o StackArray.o StackLinked.o StackNode.o -o test6

StackNode.o: StackNode.cpp StackNode.h
	g++ -c StackNode.cpp

StackArray.o: StackArray.cpp StackArray.h
	g++ -c StackArray.cpp 

StackLinked.o: StackLinked.cpp StackLinked.h
	g++ -c StackLinked.cpp

EvaluatePostfix.o: EvaluatePostfix.cpp config.h
	g++ -c EvaluatePostfix.cpp

test6.o: test6.cpp config.h
	g++ -c test6.cpp

clean:
	rm *.o EvaluatePostfix test6 delimiters
