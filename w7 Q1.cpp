#include<iostream>
using namespace std;
const double PI = 3.142;
class circle {
	double radius;

public:
	circle() {}
	circle(double r) {
		radius = r;
	}
	double getradius() {
		return radius;
	}
	void setradius(double r) {
		radius = r;
	}
	double calarea() {
		return PI * radius* radius;
	}
	double calcircumference() {
		return 2 * PI* radius;
	}
	void showdata() {
		cout << "DETAILS OF CIRCLE ARE:\n---------------------- " << endl;
		cout << "Area of circle is           : " << calarea() << endl;
		cout << "Circumference of circle is  : " << calcircumference() << endl << endl;
	}

};
class cylinder :public circle {
	double height;
public:
	cylinder() {}
	cylinder(double r, double h) :circle(r) {
		height = h;
	}
	double getheight() {
		return height;
	}
	void setheight(double h) {
		height = h;
	}
	double calarea() {
		return (2 * PI * getradius() * height) + (2 * PI * getradius() * getradius());
	}
	double calvolume() {
		return PI * getradius()* getradius()* height;
	}
	void showdata() {
		cout << "DETAILS OF CYLINDER ARE:\n------------------------ " << endl;
		cout << "Surface area of cylinder is : " << calarea() << endl;
		cout << "Volume of cylinder is       : " << calvolume() << endl;
	}
};
int main() {
	circle circle1 = circle(4);
	circle1.showdata();
	cylinder cylinder1(5, 10);
	cylinder1.cylinder::showdata();
}
