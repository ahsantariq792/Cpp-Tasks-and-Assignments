#include<iostream>
using namespace std;
class mealbill {
	double mealcost, payment;
public:
	mealbill() 
	{}
	double getmealcost() {
		return mealcost;
	}
	void setmealcost(double mc) {
		mealcost = mc;
	}
	double getpayment() {
		return payment;
	}
	void setpayment(double pay) {
		payment = pay;
	}

	double taxrate() {
		return (6 * mealcost) / 100;
	}
	double tip() {
		return (15 * mealcost) / 100;
	}
	double totalcost() {
		return mealcost + taxrate() + tip();
	}
	double change() {
		return getpayment() - totalcost();
	}

};
int main() {
	mealbill mb;
	cout << "\n-------\nBILL\n-------" << endl;
	mb.setmealcost(750);
	cout << "Meal Cost  " << mb.getmealcost() << endl;
	cout << "Tax        " << mb.taxrate() << endl;
	cout << "Tip        " << mb.tip() << endl;
	cout << "Total Cost " << mb.totalcost() << endl;
	cout << "\n-------\nRECEIPT\n-------" << endl;
	cout << "Total Cost " << mb.totalcost() << endl;
	mb.setpayment(1000);
	cout << "Payment    " << mb.getpayment() << endl;
	cout << "Change     " << mb.change() << endl << endl;
	cout << "Thankyou for dining at Restaurant Products,Inc" << endl;
}
