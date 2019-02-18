//--------------------------------------------------------------------
//
//  StackLinked.cpp
// 
//  Linked implementation of the Stack ADT
//
//--------------------------------------------------------------------

#include "Stack.h"
#include "StackLinked.h"

//-------------------------------------------------------------
//	Constructors
//-------------------------------------------------------------
template <typename DataType>
StackLinked<DataType>::StackLinked(int maxNumber) : top(NULL)
{
}

template <typename DataType>
StackLinked<DataType>::StackLinked(const StackLinked& other)
{
}

template <typename DataType>
StackLinked<DataType>::~StackLinked()
{
	clear();
}

//-------------------------------------------------------------
//	Operators
//-------------------------------------------------------------

template <typename DataType>
StackLinked<DataType> & StackLinked<DataType>::operator=(const StackLinked& other)
{
	return *this;
}


//-------------------------------------------------------------
//	Member Functions
//-------------------------------------------------------------

template <typename DataType>
void StackLinked<DataType>::push(const DataType& newDataItem) throw (logic_error) 
{
	if(isFull())
	{
		std::string message = "Stack is full, cannot add new data";
		throw(logic_error(message));	
	} else {
		DataType * toAddPtr = new StackNode(newDataItem, top);
		top = toAddPtr;
		toAddPtr = NULL;
	}	
}

template <typename DataType>
DataType StackLinked<DataType>::pop() throw (logic_error)
{
	if(isEmpty())
	{
		std::string message = "Stack is empty, cannot delete data";
		throw (logic_error(message));
	} else {

		DataType * toDelPtr = top; 
		DataType dataToDel = dataToDel->nodeData;
		delete toDelPtr;
		return dataToDel;
	}
}

template <typename DataType>
void StackLinked<DataType>::clear()
{
	while(!isEmpty()) 
	{
		pop();
	}
	
}

template <typename DataType>
bool StackLinked<DataType>::isEmpty() const
{
	return (top == NULL);
}

template <typename DataType>
bool StackLinked<DataType>::isFull() const
{
	return false;
}

template <typename DataType>
void StackLinked<DataType>::showStructure() const
{
}

