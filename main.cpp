#include <QCoreApplication>
#include <SmallInt.h>
#include <iostream>

using namespace std;
void test1(SmallInt si) {
    si=si+2;
    cout << si<<endl;

}


int main(int argc, char *argv[])
{


    SmallInt si(4);
    test1(4);
    return 0;
}

