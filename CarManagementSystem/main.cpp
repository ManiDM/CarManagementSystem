#include <iostream>
#include "CarManager.h"
using namespace std;

int main()
{
    enum choice{BUY=1,EXIT};
    string m_carNumber;
    CarManager *carManager = new CarManager;
    int m_choice;

    while(1){
        cout << "Enter your choice:" << endl;
        cout << "1 - Buy Car" << endl;
        cout << "2 - Exit" << endl;
        cin >> m_choice;

        switch(m_choice){
        case BUY:
        {
            cout << "Enter Car Number" << endl;
            cin >> m_carNumber;

            bool val = carManager->userCar(m_carNumber);

            if(val == true){
                cout << "Car is assigned to user" << endl;
                cout << endl;
            }
            else
            {
                cout << "Car Number is not found" << endl;
            }
            carManager->print();
            break;
        }

        case EXIT:
        {
            delete carManager;
            return 0;

        }
        }
    }

}
