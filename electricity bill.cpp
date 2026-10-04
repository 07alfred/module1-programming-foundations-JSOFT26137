#include <iostream>
using namespace std;
int main()
    {double units;

        cout << "enter units:";
        cin >> units;
        if (units>0 && units<100)
            cout<< (units*5) << " is the total bill"<< endl;
        else if (units>100 && units<200)
            cout<<(100*5) + (units-100)*7<< " is the total bill"<< endl;
            cout<<(100*5)+ 100*7 + (units-200)*10<< " is the total bill"<< endl;
        return 0;

}
