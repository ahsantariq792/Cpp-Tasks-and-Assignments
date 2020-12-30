#include<iostream>
using namespace std;
class mealbill {
	double mealcost, payment, balance;
	string id, name;
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
	double getbalance() {
		return balance;
	}
	void setbalance(double bal) {
		balance = bal;
	}
	string getid() {
		return id;
	}
	void setid(string i) {
		id = i;
	}
	string getname() {
		return name;
	}
	void setname(string n) {
		name = n;
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
	mb.setbalance(2000);
	mb.setname("Ahmed Ali");
	cout << "Status of " << mb.getname() << "'s account " << mb.getbalance() << endl;
	cout << "\n";
	cout << "BILL:\n----------" << endl;
	mb.setmealcost(500);
	cout << "Meal Cost  " << mb.getmealcost() << endl;
	cout << "Tax        " << mb.taxrate() << endl;
	cout << "Tip        " << mb.tip() << endl;
	cout << "Total Cost " << mb.totalcost() << endl;
	cout << "\n";
	cout << "RECEIPT:\n---------" << endl;
	cout << "Total Cost " << mb.totalcost() << endl;
	mb.setpayment(1000);
	cout << "Payment    " << mb.getpayment() << endl;
	cout << "Change     " << mb.change() << endl;
	cout << "\n";
	cout << "Thankyou for dining at University Summit Restaurant" << endl << "\n";
	cout << "Current status of Ahmed's account" << endl;
	mb.setid("0210-BCS-06");
	cout << "ID         " << mb.getid() << endl;
	cout << "Balance    " << mb.getbalance() - mb.totalcost() << endl;
}
