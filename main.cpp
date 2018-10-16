#include<iostream>
#include<string>

using namespace std;

string phrase()
{
	cout << "Please input a phrase or word. ";
	string a = "";
	getline(cin, a);
	return a;
}

int count(string a)
{
	int number = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a.substr(i,1) == "A" || a.substr(i,1) == "a")
		{
			number++;
		}
	}
	cout << "The number of the letter a's in your phrase is: ";
	return number;
}

int main()
{
	cout << count(phrase()) << "." << endl;
    	return 0;
}
