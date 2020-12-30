#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class dormRoom {
private:
	int beds, desks, lights, chairs, fans, days;
	int rentPerDay;
public:
	dormRoom() 
	{
		rentPerDay = 4000;
	}
	//getters
	int getbeds() {
		return beds;
	}
	int getdesks() {
		return desks;
	}
	int getlights() {
		return lights;
	}
	int getchairs() {
		return chairs;
	}
	int getfans() {
		return fans;
	}
	int getdays() {
		return days;
	}
	//setters
	void setbeds(int beds) {
		this->beds = beds;
	}
	void setdesks(int desks) {
		this->desks = desks;
	}
	void setlights(int lights) {
		this->lights = lights;
	}
	void setchairs(int chairs) {
		this->chairs = chairs;
	}
	void setfans(int fans) {
		this->fans = fans;
	}
	void setdays(int days) {
		this->days = days;
	}
	float setngetRent() {
		float rent = rentPerDay * days;
		return rent;
	}
	void showdata() {
		cout << "Beds : " << getbeds() << "\nDesks : " << getdesks() << "\nChairs : " << getchairs();
		cout << "\nLights : " << getlights() << "\nFans : " << getfans() << "\nRent for " << getdays() << " days is :";
		cout << setngetRent();
	}
};
class rectangle {
private:
	float length, width;
public:
	rectangle(float length, float width) {
		this->length = length;
		this->width = width;
	}
	//getter
	float getlen() {
		return length;
	}
	float getwid() {
		return width;
	}
	//setter
	void setlen(float length) {
		this->length = length;
	}
	void setwid(float width) {
		this->width = width;
	}
	inline float calcArea() {
		return length * width;
	}
};
int main()
{
	cout << "\n-----------------\nClass Dorm Room :\n-----------------\n";
	dormRoom Droom;
	Droom.setbeds(4);
	Droom.setdesks(6);
	Droom.setlights(3);
	Droom.setchairs(6);
	Droom.setfans(2);
	Droom.setdays(5);
	Droom.showdata();
	cout << "\n-----------------\nClass Rectangle :\n-----------------\n";
	rectangle r(20, 10);
	cout << "Length : " << r.getlen() << endl;
	cout << "Width : " << r.getwid()  << endl;
	cout << "Area : " << r.calcArea() << endl;
}

