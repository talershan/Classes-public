/// Chloe Tomazinis 
/// CIS 1202.501
/// April 25th, 2024

#include <iostream>

using namespace std;

template <typename T>
T half(T num)
{
	return num / 2;
}

int half(int num)
{
	return round(static_cast<float>(num) / 2);
}


//main method
int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3; 

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

}

