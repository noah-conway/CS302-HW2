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
StackLinked<DataType>::StackLinked(int maxNumber)
{
}

template <typename DataType>
StackLinked<DataType>::StackLinked(const StackLinked& other)
{
}

template <typename DataType>
StackLinked<DataType>::~StackLinked()
{
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
void StackLinked<DataType>::push(const DataType& newDataItem)// throw (logic_error) 
{
}

template <typename DataType>
DataType StackLinked<DataType>::pop() //throw (logic_error)
{
	DataType dataToDel;
	return dataToDel;
}

template <typename DataType>
void StackLinked<DataType>::clear()
{
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

