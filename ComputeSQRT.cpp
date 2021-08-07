#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	double n, guess, r, temp;
	int i = 0;
	while(cin>>n)
	{
		guess = n / 2;
		temp = 0;
		for (;;)
		{
			temp = guess;
			r = n / guess;
			guess = (guess + r) / 2;
			if (abs(temp - guess) < 0.01)
			{
				break;
			}
		}
		cout << fixed << setprecision(2) << guess;
		if (cin.eof())
			break;
		cout << "\n";
	}
}