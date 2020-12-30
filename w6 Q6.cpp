#include<iostream>
using namespace std;
class person {
	string name, gender;
	int age;
public:
	person() {}
	person(string n, int a, string g) {
		name = n;
		age = a;
		gender = g;
	}
	string getname() {
		return name;
	}
	void setname(string n) {
		name = n;
	}
	string getgender() {
		return gender;
	}
	void setgender(string g) {
		gender = g;
	}
	int getage() {
		return age;
	}
	void setage(int a) {
		age = a;
	}
	void showdata() {
		cout << "Name of person is " << name << endl;;
		cout << "Age of person is " << age << endl;
		cout << "Gender " << gender << endl;
	}
};
class student :public  person 
{
public:
	student() {};
	student(string n, int a, string g) :person(n, a, g) {

	}
	void showdata() {
		cout << "Name of student is " << getname() << endl;;
		cout << "Age of student is " << getage() << endl;
		cout << "Gender " << getgender() << endl;
	}

};
class graduatedstudent :public student 
{
	string university, program;
	float gpa;
public:
	graduatedstudent() {}
	graduatedstudent(string n, int a, string g) :student(n, a, g) {
		cout << "Name of student : " << n << endl;;
		cout << "Age of student  : " << a << endl;
		cout << "Gender " << g << endl;
	}
	string getuniversity() {
		return university;
	}
	void setuniversity(string u) {
		university = u;
	}
	string getprogram() {
		return program;
	}
	void setprogram(string p) {
		program = p;
	}
	float getgpa() {
		return gpa;
	}
	void setgpa(float gp) {
		gpa = gp;
	}
	void showdata() {
		cout << "GRADUATED FROM  :   " << getuniversity() << endl;
		cout << "DEGREE PROGRAM  :   " << getprogram() << endl;
		cout << "GPA is          :   " << getgpa() << endl;
	}

};
int main() {
	cout << "----------------------------\nGRADUATED STUDENT DETAILS:\n----------------------------" << endl;
	cout << "\n";
	graduatedstudent st1("Ahsan Tariq", 22, "Male");
	st1.setuniversity("NED University");
	st1.setprogram("SOFTWARE ENGINEERING");
	st1.setgpa(3.9);
	st1.showdata();
}
