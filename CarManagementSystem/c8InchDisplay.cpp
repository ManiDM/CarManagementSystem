#include "c8InchDisplay.h"
#include <iostream>
using std::cout;
using std::endl;

c8InchDisplay::c8InchDisplay()
{
    cout << "c8InchDisplay Constructor" << endl;
    init();
}

c8InchDisplay::~c8InchDisplay()
{
    cout << "c8InchDisplay Destructor" << endl;
    delete m_phoneFunction;
}

void c8InchDisplay::getDisplay()
{
    cout << "8 Inch Display GetDisplay" << endl;
}

void c8InchDisplay::init()
{
    m_phoneFunction = new PhoneFunction;
}
