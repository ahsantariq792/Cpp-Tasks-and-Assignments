#include <iostream>
#include <conio.h>
#include <string>

class RentedVehicle
{
private:
	double basefee;
public:
	RentedVehicle()
	{};
	double getcost()
	{
		return basefee;
	};
	void setcost(double c)
	{
		basefee = c;
	}

};
class FuelVehicle : RentedVehicle
{
private:
	int Kms;
public:
	double MileageFee;
	FuelVehicle()
	{};
	int getMileageFee()
	{
		return MileageFee;
	};
	void showdata()
	{
		if (Kms < 100)
		{
			MileageFee = 0.2 * Kms;
		}
		else if (100 <= Kms <= 400)
		{
			MileageFee = 0.3 * Kms;
		}
		else if (Kms > 400)
		{
			MileageFee = (0.3 * 400) + (0.5 * (Kms - 400));
		}
	}
	int getKms()
	{
		return Kms;
	}
};

class Car : FuelVehicle
{
private:
	double seats;
	double x;
public:
	Car()
	{};
	x=(seats*basefee) + MileageFee
};

class Truck : FuelVehicle
{
private:
	int capacity;


};
class Bicycle : FuelVehicle
{
private:
	int nDays;


};