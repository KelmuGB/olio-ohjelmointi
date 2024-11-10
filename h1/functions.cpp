#include <iostream>

using namespace std;

void calcSum(int a, int b)
{
    int result = a+b;
    cout << "Lukujen summa on " << result << endl;
}

void calcDiv(int a, int b)
{
    if (b==0) {
        cout << "Jakaja on nolla. Lukujen osamaaraa ei voida laskea." << endl;
        return;
    }
    int result = a/b;
    cout << "Lukujen osamaara on " << result << endl;
}

int retSum(int a, int b)
{
    int result = a+b;
    return result;
}

float retDiv(int a, int b)
{
    if (b==0) {
        cout << "Jakaja on nolla. Lukujen osamaaraa ei voida laskea." << endl;
        return 0;
    }
    float result = a/b;
    return result;
}
