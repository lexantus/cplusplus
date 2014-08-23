#include "std_lib_facilities.h"

int main()
{
	int number_of_words = 0;
	
	string priv_string = " ";
	string current_string;

	while (cin >> current_string)
	{
		number_of_words ++;
		
		if (current_string == priv_string)
		{
			cout << "number of words = " << number_of_words
				 << " Repeated word " << current_string << endl;
		}
		
		priv_string = current_string;
		
	}
	
	return 1;
}
