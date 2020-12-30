#include<iostream>
#include<conio.h>

using namespace std;
struct student 
{
	char firstname[12];
	char lastname[12];
	double score;
public:
	void getdata(void);
	void displaydata(void);
};

void student :: getdata(void)
{
	cout << "Enter First name: " << endl;
	cin >> firstname;
	cout << "Enter Last name: " << endl;
	cin >> lastname;
	cout << "Enter Score: " << endl;
	cin >> score;
	
}
void student::displaydata(void)
{
	cout << endl;
	cout << "Details of the student are :" << endl << endl;
	cout << "First name: " <<firstname << endl;
	cout << "Last name: " << lastname << endl;
	cout << "Score: " << score << endl;


}

int main() 
{
	student st1;
	st1.getdata();
	st1.displaydata();
	return 0;

}
