#include "Account.h"
#include <iostream>

using namespace std;

int main() {
	Account frankAcc;
	Account sergeAcc;

	sergeAcc.setName("Serge");
	cout << sergeAcc.getName() <<endl;

	return 0;
}