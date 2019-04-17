#include <iostream>
using namespace std;
int main()
{
	double paid, retail, retailItem, multiply, discount;
	char dollarSign = 36; //implicit conversion

	cout << "What is the price paid for the box? " << endl;
	cin >> paid;
	cout << "What is the retail value of the box? " << endl;
	cin >> retail;
	multiply = paid / retail;
	cout << "What is the retail value of the item? " << endl;
	cin >> retailItem;
	discount = multiply * retailItem;
	cout << "The discount price for the item is: " << dollarSign << discount << endl;
	system("pause");
	return 0;
	}
