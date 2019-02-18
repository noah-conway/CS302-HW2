//---------------------------------------------------------------
//
//	StackNode.cpp
//
//	Node for linked implementation of stack
//
//---------------------------------------------------------------

#include "StackNode.h"

template <typename DataType>
StackNode<DataType>::StackNode()
{
	std::cout << "stacknode def ctor" << std::endl;
}

template <typename DataType>
StackNode<DataType>::StackNode(const DataType& nodeData, StackNode* nextPtr) : dataItem(nodeData), next(nextPtr)
{
	std::cout << "stacknode p-ctor" << std::endl;
}


template <typename DataType>
DataType StackNode<DataType>::getDataItem() const
{
	return dataItem;
}

template <typename DataType>
StackNode<DataType> * StackNode<DataType>::getNext() const
{
	return next;
}
	

