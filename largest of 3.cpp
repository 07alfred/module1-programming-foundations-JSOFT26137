#include <iostream>
using namespace std;
int main()
    {int num1;
     int num2;
     int num3;
        cout << "enter num1:";
        cin >> num1;
        cout<< "enter num2:";
        cin>> num2;
        cout<< "enter num3:";
        cin >> num3;
        if (num1>num2 && num1>num3)
            cout<< "num1 is greater";
        else if (num2>num1 && num2>num3)
            cout<< "num2 is greater";
            cout<< "num3 is greater";
        return 0;

}
