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
}

template <typename DataType>
StackNode<DataType>::StackNode(const DataType& nodeData, StackNode* nextPtr) : dataItem(nodeData), next(nextPtr)
{
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
	

