#include "std_lib_facilities.h"

int main()
{
	cout << "Please, input expression (you can input +, -, * and /): ";
	int lval = 0;
	int rval;
	char op;
	
	cin >> lval;
	
	if (!cin) error("There is no left operand");
	
	while (cin >> op)
	{
		cin >> rval;
		
		if (!cin) error("There is no the second operand");
		
		switch (op){
			
			case '+':
				lval += rval;
				break;
				
			case '-':
				lval -= rval;
				break;
			
			case '*':
				lval *= rval;
				break;
				
			case '/':
				lval /= rval;
				break;
				
			default:
				
				cout << "Result: " << lval << '\n';
				keep_window_open();
				return 0;
		}
	}
	
	error("Not right expression!");
}