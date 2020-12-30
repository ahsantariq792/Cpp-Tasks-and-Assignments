#include<iostream>
using namespace std;
int fact(int* ptr) 
{
	int fact = 1;
	if (*ptr == 0 || *ptr == 1)
	{ 
		return 1; 
	}
	else {
		for (int i = 1; i <= *ptr; i++) 
		{
			fact = fact * i;
		}
		return fact;
	}
}
int main() {
	int num;
	int *ptr;
	cout << "Enter number to calculate factorial" << endl;
	cin >> num;
	ptr = &num;
	cout << "Factorial of given number is : " << fact(&num) << endl;
	return 0;
}


