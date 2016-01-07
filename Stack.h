/*
 * Queue.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef STACK_H_
#define STACK_H_
#include "Element.h"
class Stack
{
private:
	Element* _first;


public:
	void push(Element* element);
	Element* pop();
	Stack();
	virtual ~Stack();
};

#endif /* STACK_H_ */
