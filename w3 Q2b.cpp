#include <iostream>  
#include <math.h>  
using namespace std;
int main()
{
	int matrix1[10][10] = { {5,-3,8},{12,21,-6},{4,11,6} };
	int matrix2[10][10] = { {1,3,2},{6,1,3},{-4,6,10} };
	int ans[10][10] = { {0,0,0},{0,0,0},{0,0,0} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ans[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				ans[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	cout << "The product of two matrices is: " << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}



