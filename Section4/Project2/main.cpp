#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cents {92};
    
    cout << "dollars: " << cents/100 << endl;
    cents %= 100;
    cout << "quarters: " << cents/25 << endl;
    cents %= 25;
    cout << "dimes: " << cents/10 << endl;
    cents %= 10;
    cout << "nickels: " << cents/5 << endl;
    cents %= 5;
    cout << "pennies: " << cents << endl;
    return 0;
}