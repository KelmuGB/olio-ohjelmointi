#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int luku1;
    int luku2;
    cout << "Anna 1. kokonaisluku" << endl;
    cin >> luku1;
    cout << "Anna 2. kokonaisluku" << endl;
    cin >> luku2;

    calcSum(luku1, luku2);
    calcDiv(luku1, luku2);

    cout << "Lukujen summa on " << retSum(luku1, luku2) << endl;
    cout << "Lukujen osamaara on " << retDiv(luku1, luku2) << endl;

    return 0;
}
