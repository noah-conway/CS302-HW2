//--------------------------------------------------------------------
//
//   delimiters.cpp
//
//--------------------------------------------------------------------

#include <iostream>
#include <string>

#if LAB6_TEST1
#   include "StackLinked.cpp"
#else
#   include "StackArray.cpp"
#endif

bool checkOperation(char input)
{
	return ((input == '+') || (input == '-') || (input == '/') || (input == '*'));
}

bool checkNumber(char input)
{
	return ((input == '0') || (input == '1') || (input == '2') || (input == '3') || (input == '4') || (input == '5') || (input == '6') || (input == '7') || (input == '8') || (input == '9'));
}

template <class DataType>
DataType calcExpression ( DataType a, DataType b, char operation)
{
	switch (operation)
	{
		case '+':
			return (a + b); 

		case '-':
			return (a - b);

		case '*':
			return (a * b);

		case '/':
			return (a / b);

	} //end switch
	
}

int main ()
{
	std:string expression;
	
	std::cout << "Enter a postfix expression to be evaluated: ";
	std::cin >> expression;

	StackArray<float> postfixStack;
	float term1;
	float term2; 
	char number;
	float floatnumber;

	for (int index = 0; index < expression.size(); index++)
	{	
		if(checkNumber(expression[index]))
		{
			number = expression[index];
			floatnumber = (float)(number - '0');
			postfixStack.push(floatnumber);
		}
		else if(checkOperation(expression[index]))
		{
			term1 = postfixStack.pop();
			term2 = postfixStack.pop();
			postfixStack.push( calcExpression(term2, term1, expression[index]) );
				
		}	
		else
		{
			std::cout << "invalid expression"  << std::endl;
			return 0;
		}
	}		

	std::cout << "Result: " << postfixStack.pop() << std::endl;
	
	return 0;
}



