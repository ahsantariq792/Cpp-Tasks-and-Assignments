#include<iostream>
using namespace std;
void sum(int* ptr1, int* ptr2) 
{
	int c[5];
	int* sum;
	sum = c;
	for (int i = 0; i < 5; i++) {
		*sum = *ptr1 + *ptr2;
		cout << "num1[" << i << "] = " << *ptr1 << " + " << "num2[" << i << "] = " 
			 << *ptr2 << " and the result is : " << *sum << endl;
		ptr1++, ptr2++;

	}

}
int main() 
{
	int num1[5] = { 23,41,66,4,27 };
	int num2[5] = { 12,54,61,8,77 };
	sum(num1, num2);
}


