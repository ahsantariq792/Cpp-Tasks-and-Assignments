#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int Matrix1[3][3] = { {3,8,-2},{5,-1,1},{6,4,9} };
	int Matrix2[3][3] = { {8,2,6},{-1,9,7},{-4,2,4} };
	cout<<"The Sum of Two Matrices is :"<<endl << endl;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
		cout << Matrix1[i][j] + Matrix2[i][j] << "\t";
		}
		cout << endl;
	}
		
}





