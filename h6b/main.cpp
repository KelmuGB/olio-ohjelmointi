#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass objectExampleClass;
    objectExampleClass.startToWait();
    return a.exec();
}
