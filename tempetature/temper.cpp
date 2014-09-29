#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	double temp = 0;
	double sum = 0;
	double high_temp;
	double low_temp;
	
	while (cin >> temp)
	{
		high_temp = temp;
		low_temp = temp;
		
		sum += temp;
		temps.push_back(temp);
		if (temp > high_temp)
		{
			high_temp = temp;
		}
		
		if (temp < low_temp)
		{
			low_temp = temp;
		}
	}
	
	cout << "Max temperature: " << high_temp << endl;
	cout << "Min temperature: " << low_temp << endl;
	cout << "Average temperature: " << sum / temps.size() << endl;
	
	return 0;
}