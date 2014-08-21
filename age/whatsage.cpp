#include "std_lib_facilities.h"

int main()
{
	double current_age = -1;
	double would_like_age = -1;
	
	cout << "Please, enter your current age and how much you'd like to live" << endl;
	cin >> current_age >> would_like_age;
	
	unsigned int koef_month = 12;
	unsigned int koef_days = koef_month * 30;
	unsigned int koef_hours = koef_days * 24;
	unsigned int koef_minutes = koef_hours * 60;
	unsigned int koef_sec = koef_minutes * 60;
	unsigned int koef_milisec = koef_sec * 1000;
	
	cout << "============= current age ============= " << endl
		<< current_age * koef_month << " monthes"  << endl
		<< " " << current_age * koef_days << " days" << endl
		<< " " << current_age * koef_hours << " hours" << endl
		<< " " << current_age * koef_minutes << " minutes" << endl
		<< " " << current_age * koef_sec << " seconds" << endl
		<< " " << current_age * koef_milisec << " miliseconds"
		<< endl;
		
		cout << "============= would like age ============= " << endl
		<< would_like_age * koef_month << " monthes"  << endl
		<< " " << would_like_age * koef_days << " days" << endl
		<< " " << would_like_age * koef_hours << " hours" << endl
		<< " " << would_like_age * koef_minutes << " minutes" << endl
		<< " " << would_like_age * koef_sec << " seconds" << endl
		<< " " << would_like_age * koef_milisec << " miliseconds"
		<< endl;
		
	double rest_years = would_like_age - current_age;
		
		cout << "============= how much leave to live ============= " << endl
		<< rest_years * koef_month << " monthes"  << endl
		<< " " << rest_years * koef_days << " days" << endl
		<< " " << rest_years * koef_hours << " hours" << endl
		<< " " << rest_years * koef_minutes << " minutes" << endl
		<< " " << rest_years * koef_sec << " seconds" << endl
		<< " " << rest_years * koef_milisec << " miliseconds"
		<< endl;
		
		
	
	return 1;
}