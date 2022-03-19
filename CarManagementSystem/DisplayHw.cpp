#include "DisplayHw.h"
#include <iostream>
using std::cout;
using std::endl;
enum carModel{
    Base = 1,
    Mid,
    Top
};

DisplayHw::DisplayHw(int x)
{
    cout << "DisplayHw Constructor" << endl;
    m_c8Inch = nullptr;
    m_c10Inch = nullptr;
    m_c12Inch = nullptr;
    if(x == Base){
      m_c8Inch = new c8InchDisplay;
    }
    else if(x == Mid){
      m_c10Inch = new c10InchDisplay;
    }
    else if(x == Top){
        m_c12Inch = new c12InchDisplay;
    }
}

DisplayHw::~DisplayHw()
{
    cout << "DisplayHw Destructor" << endl;
    if(m_c8Inch!=nullptr){
    delete m_c8Inch;
}
    else if(m_c10Inch!=nullptr){
        delete m_c10Inch;
    }
    else if(m_c12Inch!=nullptr){
      delete m_c12Inch;
    }

}
