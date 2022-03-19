#include "Navigation.h"
#include <iostream>
using std::cout;
using std::endl;

Navigation::Navigation()
{
    cout << "Navigation Constructor" << endl;
}

Navigation::~Navigation()
{
    cout << "Navigation Destructor" << endl;
}

void Navigation::init()
{
    cout << "Navigation called" << endl;
}
