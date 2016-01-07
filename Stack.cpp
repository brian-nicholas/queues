/*
 * Queue.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Stack.h"

Stack::Stack() : _first(NULL)
{


}

void Stack::push(Element *element)
{
	if(_first == NULL) // the queue is empty
	{
		_first = element;

	}else //if the queue is not empty
	{
		_first -> _next = element;
		_first = element;
	}
}

Element *Stack::pop()
{
	if(_first == NULL)
	{
		return NULL;
	}
	Element* temp = _first;
	_first = _first -> _next;
	return temp;

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}
