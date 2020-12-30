#include<iostream>
using namespace std;
class graderecord
{
public:
	float gpa = 0;
	int gradepts = 0, units = 0;
	string id;
public:
	graderecord() {}
	graderecord(int gp, int u, string i)
	{
		gradepts = gp;
		units = u;
		id = i;
	}
	int getgradepts()
	{
		return gradepts;
	}
	void setgradepts(int gp)
	{
		gradepts = gp;
	}
	int getunits()
	{
		return units;
	}
	void setunits(int u)
	{
		units = u;
	}
	string getid() {
		return id;
	}
	void setid(string i) {
		id = i;
	}
};
int main()
{
	graderecord Semester1;
	Semester1.setid("0210-BCS-01");
	Semester1.setgradepts(345);
	Semester1.setunits(100);
	cout << "After completing 1st semester\n----------------------------" << endl;
	cout << "STUDENT ID " << Semester1.getid() << "\nUNITS " << Semester1.getunits() << "\nGRADE POINTS " << Semester1.getgradepts() << "\nGPA " << Semester1.getgradepts() / float(Semester1.getunits()) << endl;
	cout << "\n";

	graderecord Semester2;
	Semester2.setid("0210-BCS-01");
	Semester2.setgradepts(58);
	Semester2.setunits(16);
	cout << "After completing 2nd semester\n----------------------------" << endl;
	cout << "STUDENT ID " << Semester2.getid() << "\nUNITS " << Semester2.getunits() + Semester2.getunits() << "\nGRADE POINTS " << Semester2.getgradepts() + Semester2.getgradepts() << "\nGPA " << (Semester2.getgradepts() + Semester2.getgradepts()) / (float(Semester2.getunits() + Semester2.getunits())) << endl;
}
