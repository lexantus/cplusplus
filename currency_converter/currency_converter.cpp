#include "std_lib_facilities.h"

int main()
{
	const double dollar_to_ruble = 36.1397;
	const double euro_to_ruble = 47.6177;
	const double crona_to_ruble = 52.1402;
	const double grivna_to_ruble = 26.9068;
	
	cout << "Please input sum in rubles and d/e/c/g symbol(dollar, euro, crone, grivna)" << endl;
	cout << "Course:" << endl
		 << "dollar: " << dollar_to_ruble << endl
		 << "euro: " << euro_to_ruble << endl
		 << "crona: " << crona_to_ruble << endl
		 << "grivna: " << grivna_to_ruble << endl;
	
	double sum;
	char unit;
	
	cin >> sum >> unit;
	
	switch (unit)
	{
		case 'd':
			cout << sum / dollar_to_ruble << " dollars" << endl;
			break;
		
		case 'e':
		
			cout << sum / euro_to_ruble << " euros" << endl;
			break;
			
		case 'c':
		
			cout << sum / crona_to_ruble << " swedish crone" << endl;
			break;
			
		case 'g':
		
			cout << sum / grivna_to_ruble << " ukranian grivna" << endl;
			break;
		
		default:
			cout << "I don't know unit" << unit << endl;
			break;	
	}
	
	return 1;
}