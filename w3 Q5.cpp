#include<iostream>
using namespace std;
struct address 
{
	char houseno[16];
	char city[16];
	char pincode[16];
};
struct employee 
{
	int ID;
	char Name[20];
	double Salary;
	struct address add;
};

int main() 
{
	employee emp1;
	cout << "Enter employee id:" << endl; 
	cin >> emp1.ID;
	cout << "Enter employee name:" << endl; 
	cin >> emp1.Name;
	cout << "Enter employee salary:" << endl; 
	cin >> emp1.Salary;
	if (emp1.Salary < 50000) 
	{
		cout << "Your salary is increased by 20%" << endl;
		emp1.Salary += (emp1.Salary*0.2);
	}
	cout << "Enter employee houseno:" << endl;
	cin >> emp1.add.houseno;
	cout << "Enter employee city:" << endl; 
	cin >> emp1.add.city;
	cout << "Enter employee pincode:" << endl; 
	cin >> emp1.add.pincode;
	cout << endl;
	cout << "DETAILS OF EMPLOYEES" << endl;
	cout << "Employee id:" << emp1.ID << endl;
	cout << "Employee name:" << emp1.Name << endl;
	cout << "Employee salary:" << emp1.Salary << endl;
	cout << "Employee houseno:" << emp1.add.houseno << endl;
	cout << "Employee city:" << emp1.add.city << endl;
	cout << "Employee pincode:" << emp1.add.pincode << endl;
	return 0;
}





