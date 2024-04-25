/// Chloe Tomazinis 
/// CIS 1202.501
/// April 25th, 2024

#include <iostream>

using namespace std;

//method
char character(char start, int offset)
{
	try {
		if (!isalpha(start))
		{
			throw "invalidCharacterException";
		}
		if (isupper(start) && (islower(start + offset) || !isalpha(start + offset)) 
			|| (islower(start) && (isupper(start + offset) || !isalpha(start + offset))))
		{
			throw "invalidRangeException";
		}
		else
		{
			return start + offset;
		}

	}
	catch (const char* msg)
	{
		if (msg == "invalidRangeException")
		{
			cout << msg;
		}
		else if (msg == "invalidCharacterException")
		{
			cout << msg;
		}
	}
	
}

//main method
int main()
{
	cout << character('a', 1) << endl;
	cout << character('A', 32) << endl;
	cout << character('Z', -1) << endl;
	cout << character('?', 5) << endl;
	cout << character('C', -5) << endl;
	cout << character('A', 15) << endl;
	cout << character('*', -1) << endl;
	cout << character('d', -5) << endl;

}

