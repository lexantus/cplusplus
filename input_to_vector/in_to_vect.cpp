#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	double temp;
	while (cin >> temp)
	{
		temps.push_back(temp);
	}
	
	double sum;
	
	for (int i = 0; i < temps.size(); ++i)
	{
		sum += temps[i];
	}
	
	cout << "average temperature: " << sum / temps.size() << endl;
	
	
	sort(temps.begin(), temps.end());
	
	cout << "mediana: " << temps[temps.size() / 2] << endl;

	return 1;
}