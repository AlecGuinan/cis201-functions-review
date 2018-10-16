/* 
File name: main.cpp
Author: Alec Guinan
Email: guinana@student.vvc.edu
Date Created 10/16/2018
Purpose: this program will count the number of A s in a string
*/

#include<iostream>
#include<string>

using namespace std;
string get_string(string prompt);// gets a string
bool is_a(string s);// checks if a single character is the letter a
int count_a(string l);// counts the number of A s in the string
int main()
{
	int count;
	string something = get_string("Enter a String: ");
	count = count_a(something);
	cout << count << endl;
    return 0;
}

bool is_a(char s) 
{
	bool value;
	
	if(s == 'a' || s == 'A')
		value = true;
	else
		value = false;

	return value;
}
int count_a(string l)
{
	int count = 0; 
	for ( int i = 0; i < l.length(); i++)
	{
		char s = l.at(i);
		if ( is_a(s))
		{
			count ++;
		}
	}
	return count;
}
string get_string(string prompt)
{
	string s;
	cout << prompt;
	cin >> s;
	return s;
}
