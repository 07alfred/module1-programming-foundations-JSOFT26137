#include <iostream>
using namespace std;
int main()
{int a,b;
char op;
cout<<"enter input a ";
cin >> a;
cout<<"enter input b ";
cin >> b;
cout << "operator ";
cin >> op;

switch (op)
{
    case '+': cout << a+b ; break;
    case '-': cout << a-b; break;
    case '*': cout << a*b; break;
    case '%':
        if (b!=0)
        cout << a%b;
        else
            cout << "error";
        break;
    default : cout<< "error";

}
}
