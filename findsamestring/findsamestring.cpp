#include "std_lib_facilities.h"

int main()
{
	string priv_string = " ";
	string current_string;

	while (cin >> current_string)
	{
		if (current_string == priv_string)
		{
			cout << "Repeated word " << current_string << endl;
			priv_string = current_string;
		}
	}
	
	return 1;
}
