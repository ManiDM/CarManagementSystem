#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
class Car
{
    std::string m_carN;
    std::string m_version;
public:
    Car();
    virtual ~Car();
    virtual void reciveData()=0;
    static int m_carNumber;


    const std::string &carN() const;
    const std::string &version() const;
    void setVersion(const std::string &newVersion);
};

#endif // CAR_H
