#include "Car.h"
#include <iostream>
using std::cout;
using std::endl;
int Car::m_carNumber = 3000;


const std::string &Car::carN() const
{
    return m_carN;
}

const std::string &Car::version() const
{
    return m_version;
}

void Car::setVersion(const std::string &newVersion)
{
    m_version = newVersion;
}

Car::Car()
{
     cout << endl << "Car Constructor" << endl;
     m_carN = "BMW"+std::to_string(m_carNumber++);
}

Car::~Car()
{
    cout << "Car Destructor" << endl;
}


