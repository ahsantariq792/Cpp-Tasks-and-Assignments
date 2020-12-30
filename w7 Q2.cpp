#include <iostream>
#include <conio.h>
using namespace std;

class box
{
private:
	double height;
	double length;
	double width;
public:
	box()
	{};
	box(double h, double l, double w) :height(h), length(l), width(w)
	{};
	void setheight(double h)
	{
		height = h;
	}
	double getheight()
	{
		return height;
	}
	void setlength(double l)
	{
		length = l;
	}
	double getlength()
	{
		return length;
	}
	void setwidth(double w)
	{
		width = w;
	}
	double getwidth()
	{
		return width;
	}
	double volume()
	{
		return length * width* height;
	}
	box operator+(const box& b)
	{
		box box;
		box.height = this->height + b.height;
		box.length = this->length + b.length;
		box.width = this->width + b.width;
		return box;
	}
	box operator-(const box& b)
	{
		box box;
		box.height = this->height - b.height;
		box.length = this->length - b.length;
		box.width = this->width - b.width;
		return box;
	}
	box operator*(const box& b)
	{
		box box;
		box.height = this->height * b.height;
		box.length = this->length * b.length;
		box.width = this->width * b.width;
		return box;
	}
	box operator/(const box& b)
	{
		box box;
		box.height = this->height / b.height;
		box.length = this->length / b.length;
		box.width = this->width / b.width;
		return box;
	}
	void showdata()
	{
		cout << "-----------------\nDETAILS OF BOX\n----------------- : " << height << endl;
		cout << "Height : " << height << endl;
		cout << "Length : " << length << endl;
		cout << "Width  : " << width << endl << endl;
	}

};
int main()
{
	box b1(6.3, 9.6, 8.4);
	box b2(1.6, 3.2, 4.2);
	box b3;
	b3 = b1 + b2;
	b3.showdata();
	cout << endl;
	box b4;
	b4 = b1 - b2;
	b4.showdata();
	cout << endl;
	box b5;
	b5 = b1 * b2;
	b5.showdata();
	cout << endl;
	box b6;
	b6 = b1 / b2;
	b6.showdata();
}
