#include "std_lib_facilities.h"

bool find_censored(string check_word, vector<string> censored)
{
	for(int i = 0; i < censored.size(); ++i)
	{
		if (check_word == censored[i])
		{
			return true;
		}
	}
	
	return false;
}

int main()
{
	vector<string> dict;
	vector<string> censored;
	string word;
	
	while (cin >> word)
	{
		dict.push_back(word);
	}
	
	censored.push_back("fuck");
	censored.push_back("bitch");
	censored.push_back("ass");
	
	sort(dict.begin(), dict.end());
	cout << "Num words: " << dict.size() << endl;
	
	for (int i = 0; i < dict.size(); ++ i)
	{
		if (i == 0 || dict[i-1] != dict[i])
		{
			if (!find_censored(dict[i], censored))
			{
				cout << dict[i] << endl;
			}
		}
	}
	
	return 1;
}