//--------------------------------------------------------------------
//
//  StackArray.cpp
// 
//  Array implementation of the Stack ADT
//
//--------------------------------------------------------------------

//----------------------------------------------------------------
//	Constructors
//----------------------------------------------------------------
#include "StackArray.h"

template <typename DataType>
StackArray<DataType>::StackArray(int maxNumber) : top(-1), maxSize(maxNumber)
{
	dataItems  = new DataType[maxNumber];
}

template <typename DataType>
StackArray<DataType>::StackArray(const StackArray& other) : top(-1), maxSize(other.maxSize)
{
	dataItems = new DataType[maxSize];
	*this = other;
	
}

template <typename DataType>
StackArray<DataType>::~StackArray()
{
	delete dataItems;
}

//----------------------------------------------------------------
//	Operators
//----------------------------------------------------------------

template <typename DataType>
StackArray<DataType> & StackArray<DataType>::operator = (const StackArray& other)
{
	for(int index = 0; index <= other.top; index++)
	{
		push(*(other.dataItems)+index);
	}
	return *this;
}


//----------------------------------------------------------------
//	Member Functions
//----------------------------------------------------------------


template <typename DataType>
void StackArray<DataType>::push(const DataType& newDataItem) throw (logic_error)
{

	if(isFull())
	{
		std::string message = "Stack is full, cannot add new data";
		throw (logic_error (message));
	} else {

		top++;
		*(dataItems+top) = newDataItem;	
	
	} //end if else	

}

template <typename DataType>
DataType StackArray<DataType>::pop() throw (logic_error)
{
	
	DataType deleteDataItem;
	
	if(top < 0)
	{
		std::string message = "Stack is empty, cannot delete data";
		throw (logic_error(message));
	} else {
		deleteDataItem = *(dataItems + top);
		top--;	
	}

	return deleteDataItem;
	
}

template <typename DataType>
void StackArray<DataType>::clear()
{
	top = -1;
}

template <typename DataType>
bool StackArray<DataType>::isEmpty() const
{
	return (top < 0);
}

template <typename DataType>
bool StackArray<DataType>::isFull() const
{
	

	return (top >= maxSize);
}

template <typename DataType>
void StackArray<DataType>::showStructure() const
{
	for(int index = 0; index <= top; index++)
	{
		std::cout  << *(dataItems + index) << " ";
	}	
	std::cout << std::endl;	
}
