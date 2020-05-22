#include "Account.h"

using namespace std;

void Account::setName(string n) {
	name = n;
}

string Account::getName() {
	return name;
}

bool Account::deposit(double amount) {
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	return false;
}