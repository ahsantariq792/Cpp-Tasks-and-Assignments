
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	double const PI = 3.142;
	double radius , area;
	double *const pt1 = &radius;
	cout << "Enter radius of circle : " << endl;
	cin >> radius;
	area = PI * *pt1 * *pt1;
	cout << "area of circle is : " << area;
	return 0;
}


