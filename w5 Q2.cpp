#include<iostream>
using namespace std;
class Car 
{
	string brandName, color;
	double priceNew, odometer;
public:

	double getPriceAfterUse() 
	{
		return (priceNew * (1 - (odometer / 600000)));
	}
	void updateMilage(double traveledDistance) 
	{
		odometer += traveledDistance;
	}
	void toString() {
		cout << "\nCar brand name: " << brandName << "\nCar price(new): " << priceNew << "\nCar used price: " << getPriceAfterUse() << "\nCar color: " << color << "\nodometer: " << odometer << endl;
	}
	void setName(string n) 
	{
		brandName = n;
	}
	void setPrice(double p) 
	{
		priceNew = p;
	}
	void setColor(string c) 
	{
		color = c;
	}
	void setOdometer(double o) 
	{
		odometer = o;
	}

};
int main() {
	Car car1;
	cout << "Details of car1 are " << endl;
	car1.setName("Audi");
	car1.setPrice(200000);
	car1.setColor("white");
	car1.setOdometer(30);
	car1.updateMilage(1800);
	car1.toString();

}
