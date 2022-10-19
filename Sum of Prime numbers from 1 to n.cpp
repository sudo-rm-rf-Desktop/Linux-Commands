//factors
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int number, c,count=0,sum=0;

	cout << "\n\n PRIME number:\n";
	cout << "-----------------------------------\n";
	cout << " Input a number: ";
	while (!(cin >> number) || number < 0)
	{
		cout << "ERROR! Number is invalid.\nEnter a number again.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "Prime Numbers between 1 to " << number << endl;
	for (int i = 1; i <= number; i++)
	{
		count = 0;
		for (c = 1; c <= (i / 2); c++)
		{
			if (i % c == 0)
				count++;
		}
		if (count == 1)
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << "\nSum of Prime Numbers between 1 to " << number << " = " << sum << endl;
	cout << endl;
}