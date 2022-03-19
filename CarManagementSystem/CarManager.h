#ifndef CARMANAGER_H
#define CARMANAGER_H
#include "Car.h"
#include "Base.h"
#include "Mid.h"
#include "Top.h"
#include <iostream>
#include <fstream>
#include <list>
enum carModel{
    BASE = 1,
    MID,
    TOP,
    DISPLAY
};

class CarManager
{
    Car * m_car;
    std::list<Car*> m_list;
    std::list<Car*>::iterator m_iterator;
    int m_base,m_mid,m_top,m_choice;
public:
    CarManager();
    ~CarManager();
    void init();
    void print();
    void base(int);
    void mid(int);
    void top(int);
    bool userCar(std::string);
};

#endif // CARMANAGER_H
