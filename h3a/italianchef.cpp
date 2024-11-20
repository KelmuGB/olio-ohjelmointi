#include "italianchef.h"

ItalianChef::ItalianChef(string chefname) : Chef (chefname) {

}

ItalianChef::~ItalianChef() {

}

string ItalianChef::getName() {
    return name;
}
void ItalianChef::makePasta() {
    cout << name << " makes pasta" << endl;
}
