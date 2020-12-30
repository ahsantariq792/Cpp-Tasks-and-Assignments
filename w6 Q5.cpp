#include<iostream>
using namespace std;
class graderecord {
public:
	float gpa = 0;
	int gradepts = 0, units = 0;
	string id;

	int getgradepts() {
		return gradepts;
	}
	void setgradepts(int gp) {
		gradepts = gp;
	}
	int getunits() {
		return units;
	}
	void setunits(int u) {
		units = u;
	}
	string getID() {
		return id;
	}
	void setID(string i) {
		id = i;
	}
};
int main() {

	graderecord g;
	cout << "Ali's GPA is " << g.gpa << endl;
	g.setID("0210-BCS-01");
	g.setgradepts(55);
	g.setunits(18);
	cout << "Ali's 1st semester gradepoints and units: " << g.getgradepts() << " " << g.getunits() << endl;
	cout << "STUDENT ID   " << g.getID() << "\nUNITS        " << g.getunits() << "\nGRADE POINTS " << g.getgradepts() << "\nGPA          " << g.getgradepts() / float(g.getunits()) << endl;
	

}
