#include <iostream>
using namespace std;
float sum(float* pt1, float* pt2)
{
	float result;
	result = *pt1 + *pt2;
	return result;
}
float sub(float* pt1, float* pt2)
{
	float result;
	result = *pt1 - *pt2;
	return result;
}
float mul(float* pt1, float* pt2)
{
	float result;
	result = *pt1 * *pt2;
	return result;
}
float div(float* pt1, float* pt2)
{
	float result;
	result = *pt1 / *pt2;
	return result;
}


int main()
{
	float num1, num2;
	float* pt1, * pt2;
	cout << "Enter value for num1:" << endl;
	cin >> num1;
	cout << "Enter value for num2:" << endl;
	cin >> num2;
	pt1 = &num1;
	pt2 = &num2;
	cout << "The sum of num1 and num2 is        ";
	cout << sum(&num1, &num2) << endl;
	cout << "The difference of num1 and num2 is ";
	cout << sub(&num1, &num2) << endl;
	cout << "The product of num1 and num2 is    ";
	cout << mul(&num1, &num2) << endl;
	cout << "The division of num1 and num2 is   ";
	cout << div(&num1, &num2) << endl;
	return 0;
}


