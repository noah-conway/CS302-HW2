//--------------------------------------------------------------------
//
//  StackLinked.cpp
// 
//  Linked implementation of the Stack ADT
//
//--------------------------------------------------------------------

#include "StackLinked.h"

//-------------------------------------------------------------
//	StackNode
//-------------------------------------------------------------
/*
template <typename DataType>
StackLinked<DataType>::StackNode::StackNode(const DataType& nodeData, StackNode* nextptr)
{
}
*/
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
	*this = other;
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
	StackNode<DataType> * otherCurPtr = other.top;
	while(otherCurPtr != NULL) 
	{
		push(otherCurPtr->getData());
		otherCurPtr = otherCurPtr->getNext();
	}	
	
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

		StackNode<DataType> * toAddPtr = new StackNode<DataType>(newDataItem, top);
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

		StackNode<DataType> * toDelPtr; 
		toDelPtr = top;
		top = top->getNext();
		DataType dataToDel = toDelPtr->getDataItem();
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
	StackNode<DataType> * curPtr = top;
	while(curPtr != NULL)
	{
		std::cout << curPtr->getDataItem() << " ";
		curPtr = curPtr->getNext();
	}
	std::cout << std::endl;
}

