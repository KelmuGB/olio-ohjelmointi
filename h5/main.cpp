#include <iostream>
#include "assosiationa.h"
#include "aggregationa.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    int *myPointer = &a;
    cout << "pointterin osoittama osoite on: " << myPointer << endl;
    cout << "pointterin osoittama arvo on: " << *myPointer << endl;
    cout << endl;

    myPointer = &b;
    cout << "pointterin osoittama osoite on: " << myPointer << endl;
    cout << "pointterin osoittama arvo on: " << *myPointer << endl;
    cout << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    refA = b;
    cout << "refA=b osoittaa osoitteeseen: " << &refA << endl; //osoittaa samaan osoitteeseen ja viittaa vieläkin a muuttujaan
    cout << "refA=b:n osoittaman muistipaikan arvo on: " << refA << endl; //arvo muuttuu
    cout << endl;


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info"); //alkuperäinen objB ei muutu

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    cout << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info"); //alkuperäinen olio muuttuu myös
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
