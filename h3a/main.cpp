#include "chef.h"
#include "italianchef.h"


using namespace std;

int main()
{
    Chef objectChef("Gordon Ramsay");
    ItalianChef objectItalienChef("Anthony Bourdain");

    objectChef.makeSalad();
    objectChef.makeSoup();


    objectItalienChef.makePasta();
    cout << "name of the Italian Chef is " << objectItalienChef.getName() << endl;

    return 0;
}
