#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class fan
{
private:
	int const slow = 1;
	int const medium = 2;
	int const fast = 3;
	int speed;
	bool on;
	double radius;
	string colour;
public:
	fan()
	{
		speed = slow;
		on = false;
		radius = 5;
		colour = "blue";
	};
	fan(int s, bool o, double r, string c)
	{
		speed = s;
		on = o;
		radius = r;
		colour = c;
	};
	int getspeed()
	{
		return speed;
	};
	void setspeed(int s)
	{
		speed = s;
	};
	bool geton()
	{
		return on;
	};
	void seton(bool o)
	{
		on = o;
	};
	double getradius()
	{
		return radius;
	};
	void setradius(double r)
	{
		radius = r;
	};
	string getcolour()
	{
		return colour;
	};
	void setcolour(string c)
	{
		colour = c;
	};
	void showdata()
	{
		if (on == false)
			if (speed == 1)
				cout << radius << "slow" << colour;
			else
				cout << colour << radius << "fan is off";

	}
};
int main()
	{
		fan f1;
		f1.setradius(24);
		f1.showdata();
		
		return 0;

	}