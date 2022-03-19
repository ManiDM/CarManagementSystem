#include "CarManager.h"
#include <iostream>
#include "Base.h"
#include "Mid.h"
#include "Top.h"
//#include <vector>
using std::cout;
using std::cin;
using std::endl;

CarManager::CarManager()
{
    cout << "CarManager Constructor" << endl;
    init();
}

CarManager::~CarManager()
{
    cout << "CarManager Destructor" << endl;
    for(m_iterator = m_list.begin(); m_iterator!= m_list.end();++m_iterator){
        if(*m_iterator!=nullptr)
        {
            delete (*m_iterator);
        }
    }
}

void CarManager::init()
{
    while(1){

        cout << "Enter which varient You want:" << endl;
        cout << "1 - Base" << endl;
        cout << "2 - Mid" << endl;
        cout << "3 - Top" << endl;
        cout << "4 - Display" << endl;
        cout << "5 - Exit" << endl;
        cin >> m_choice;

        switch(m_choice){

        case BASE:
            cout << "Num of Base Car Varient you want:" << endl;
            cin >> m_base;
            base(m_base);

            break;


        case MID:
            cout << "Num of Mid Car Varient you want:" << endl;
            cin >> m_mid;
            mid(m_mid);

            break;

        case TOP:
            cout << "Num of Top Car Varient you want:" << endl;
            cin >> m_top;
            top(m_top);
            break;
        case DISPLAY:
            print();
            break;
        default:
            return;
        }
    }
}
void CarManager::base(int iterator){
    std::ofstream file1;
    for(int i=0; i<iterator; i++){
        m_car = nullptr;
        m_car = new Base;
        file1.open("B:/QT MK/CarManagementSystem/CarsFile.csv",std::ios::out);
        if(file1.is_open()){
            cout << "File is opened" << endl;
        }
        else
        {
            cout << "File is closed" << endl;
        }
        file1 << m_car->version() << "," << m_car->carN()   << endl;
        m_list.push_back(m_car);
    }
}

void CarManager::mid(int iterator){
    std::ofstream file1;
    for(int i=0; i<iterator; i++){
        m_car = nullptr;
        m_car = new Mid;
        file1.open("B:/QT MK/CarManagementSystem/CarsFile.csv",std::ios::out);
        if(file1.is_open()){
            cout << "File is opened" << endl;
        }
        else
        {
            cout << "File is closed" << endl;
        }
        file1 << m_car->version() << "," << m_car->carN()   << endl;
        m_list.push_back(m_car);
    }
}

void CarManager::top(int iterator){
    std::ofstream file1;
    for(int i=0; i<iterator; i++){
        m_car = nullptr;
        m_car = new Top;
        file1.open("B:/QT MK/CarManagementSystem/CarsFile.csv",std::ios::out);
        if(file1.is_open()){
            cout << "File is opened" << endl;
        }
        else
        {
            cout << "File is closed" << endl;
        }
        file1 << m_car->version() << "," << m_car->carN()   << endl;
        m_list.push_back(m_car);
    }
}

bool CarManager::userCar(std::string x){
    std::ofstream file;
    file.open("B:/QT MK/CarManagementSystem/deletedFile.csv",std::ios::out);
    if(file.is_open()){
        cout << "File is opened" << endl;
    }
    else
    {
        cout << "File is closed" << endl;
    }
    for(m_iterator = m_list.begin(); m_iterator != m_list.end(); ++m_iterator){
        if((*m_iterator)->carN()== x){
            file << (*m_iterator)->carN();
            m_list.remove(*m_iterator);
            return true;
        }
    }
    file.close();
    return false;
}

void CarManager::print()
{

    for(m_iterator=m_list.begin();m_iterator!=m_list.end();++m_iterator){
        if((*m_iterator) != nullptr){
        cout << "Version: "<<(*m_iterator)->version()  << (*m_iterator)->carN()<< endl;
        }
    }
}
