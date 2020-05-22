#pragma once
#include <string>

using namespace std;

class Account {
private:
	string name;
	double balance{ 0.0 };

public:
	void setName(string n);
	string getName();
	bool deposit(double amount);
	bool withdraw(double amount);
};

