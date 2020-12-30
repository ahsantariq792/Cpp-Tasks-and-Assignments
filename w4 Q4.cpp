#include<iostream>
using namespace std;
void table(int* n) 
{
	for (int i = 1; i <= 10; i++)
	{
		int c = *n * i;
		cout << *n << "*" << i << "=" << c << endl;
	}
}
int main()
{
	int tab;
	int* n;
	cout << "Enter number to generate table:" << endl;
	cin >> tab; 
	n = &tab;
	cout << "The table of " <<tab<< " is : " << endl;
	table(&tab);
	return 0;
}


