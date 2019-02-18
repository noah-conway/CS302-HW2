//---------------------------------------------------------------
//
//	StackNode.h
//
//	Node for linked implementation of stack
//
//---------------------------------------------------------------

#ifndef STACKNODE_H
#define STACKNODE_H

#include<iostream>

template <typename DataType>
class StackNode {

	public:
		StackNode();
		StackNode(const DataType& nodeData, StackNode* nextPtr);
		
		DataType getDataItem() const;
		StackNode * getNext() const;
	
	private:
		DataType dataItem;
		StackNode * next;

};
#endif //STACKNODE_H
