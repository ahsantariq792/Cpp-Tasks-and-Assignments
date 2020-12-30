#include <iostream>
#include<string>
using namespace std;
class Flight {
public:
	int flightnumber, availableseats, totalseats = 300;
	string destination, source;
	Flight() 
	{}
	Flight(int flightnumber, int availableseats, string destination, string source)
	{
		this->flightnumber = flightnumber;
		this->availableseats = availableseats;
		this->destination = destination;
		this->source = source;
	}
	Flight(int flightnumber)
	{
		this->flightnumber = flightnumber;
	}
	void reserve(int numberOfSeats)
	{
		if (numberOfSeats < totalseats) {
			availableseats = totalseats - numberOfSeats;
			cout << "Reserve Seats : " << numberOfSeats << "\nAvalaible Seats : " << availableseats << endl;
		}
		else
			cout << "There is not enough Space" << endl;
	}
	void cancel(int numberOfSeats)
	{
		if (totalseats > availableseats && availableseats > numberOfSeats)
		{
			cout << "Your seats are cancel" << endl;
			availableseats = availableseats + numberOfSeats;
		}
		else
			cout << "Sorry!we cannot cancel your seat" << endl;
	}
	void flightinfo()
	{
		cout << "Flight No :" << flightnumber << "\nSource:" << source << "\nDestination : " << destination << endl;
	}
	Flight(int flightnumber, int availableseats)
	{
		this->flightnumber = flightnumber;
		this->availableseats = availableseats;
		this->destination = destination;
		this->source = source;
	}
	void setflight_no(int flightnumber)
	{
		this->flightnumber = flightnumber;
	}
	int getflight_no() {
		return flightnumber;
	}
	void setavailableseats(int availableseats)
	{
		this->availableseats = availableseats;
	}
	int getavailableseats() {
		return availableseats;
	}
	void setsource(string s)
	{
		source = s;
	}
	string getsource() 
	{
		return source;
	}
	void setdestination(string d)
	{
		destination = d;
	}
	string getdestination() 
	{
		return destination;
	}
	bool equals(Flight f)
	{
		if (f.flightnumber == flightnumber) {
			return true;
		}

		else return false;
	}

};
int main() {
	cout << "FLIGHT 1 INFO" << endl;
	Flight f1 = Flight(129, 22, "karachi", "lahore");
	f1.flightinfo();
	f1.reserve(4);
	cout << "\n";
	cout << "FLIGHT 2 INFO" << endl;
	Flight f2 = Flight(95, 39, "lahore", "karachi");
	f2.flightinfo();
	f2.reserve(5);
	cout << "\n";
	if (f1.equals(f2) == true) 
	{
		cout << "TWO FLIGHTS ARE EQUAL" << endl;
	}
	else
	{
		cout << "TWO FLIGHTS ARE NOT EQUAL" << endl;
	}
}
