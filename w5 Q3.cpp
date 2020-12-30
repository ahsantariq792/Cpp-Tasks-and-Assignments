#include<iostream>
using namespace std;
int main() {
	float large = 1.80;
	float medium = 1.00;
	float small = 0.60;
	int noofbox;
	cout << "No. of noof box(es) ordered are :" << endl;
	cin >> noofbox;
	int y = noofbox;
	int x = y / 20;
	y = y % 20;

	float z = y / 10;
	y = y % 10;
	float a = y / 5;

	cout << "The cost of order is : $" << noofbox * 5.50 << endl << endl;
	cout << "Boxes Used :" << endl;
	cout << x << "large" << " -$" << large * x << endl;
	cout << z << "medium" << " -$" << medium * z << endl;
	cout << a << "small" << " -$" << small * a << endl << endl;
	cout << "Your total cost is: $" << (noofbox * 5.50) + (large * x) + (medium * z) + (small * a) << endl;
}
