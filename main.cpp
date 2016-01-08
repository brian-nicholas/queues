/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>
#include <stack>
#include <string>
#include "Stack.h"
using namespace std;

// **** I had to use other sources to help me with this **** //


bool arePair(char opening, char closing)
	{
		if (opening == '[' && closing == ']')
		{
			return true;
		}
		else if(opening == '(' && closing == ')')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
bool areBalanced(string exp)
{
	stack<char>  S;
	for (int i = 0; i < exp.size(); i ++)
	{
		if(exp[i] == '[' || exp[i] == '(')
		{
			S.push(exp[i]);
		}
		else if(exp[i] == ']' || exp[i] == ')')
		{
			if(S.empty() || !arePair(S.top(), exp[i]))
			{
				return false;
			}
			else
			{
				S.pop();
			}
		}
	}return S.empty() ? true:false;
}

int main()
{

	string str = "[(3+4)]*2";
	if (areBalanced(str))
	{
		cout << "Balanced\n";
	}
	else
	{
		cout << "Not Balanced\n";
	}
	/*Element* jules = new Element("Jules");
	Element* susan = new Element("Susan");
	Element* ray = new Element("Ray");
	Element* mike = new Element("Mike");
	Stack* stack = new Stack();
	stack->push(mike);
	stack->push(jules);
	stack->push(susan);
	stack->push(ray);


	Element* i = stack->pop();
	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = stack->pop();
	}*/



// *** below is what I created alone before restructuring to verify parens ***/



	/* Stack* stack = new Stack();
	string str = "[(3+4)]*2";

	for (int i = 0; i < str.size(); i++)
	{
		if(str[i] == '[')
		{
			Element* openBracket = new Element("[");
			stack->push(openBracket);
		}
		else if(str[i] == '(')
		{
			Element* openParen = new Element("(");
			stack->push(openParen);
		}
		else if(str[i] == ')')
		{
			Element* i = stack->pop();
			i = stack->pop();

		}
		else if(str[i] == ']')
		{
			Element* i = stack->pop();
			i = stack->pop();
		} else
		{
			cout << str[i] << endl;
		}
	}*/
}
