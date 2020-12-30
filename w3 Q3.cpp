#include<iostream>
#include<conio.h>
using namespace std;
struct student 
{
	char firstname[20];
	char lastname[20];
	double score;
};
int main() {
	student st1;
	cout << "Enter first name :" << endl;
	cin >> st1.firstname;
	cout << "Enter last name :" << endl;
	cin >> st1.lastname;
	cout << "Enter score : " << endl;
	cin >> st1.score;
	cout << "Details of the student(s1) are :" << endl;
	cout << "First name : " << st1.firstname << endl;
	cout << "Last name  : " << st1.lastname << endl;
	cout << "Score      : " << st1.score << endl;
} 



