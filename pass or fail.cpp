#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;
    if (num>100){
    cout<<"rejected"<< endl;}
    else if (num >=40)
    {cout<<"you passed"<< endl;}
    else if (num<0)
    {cout<<"rejected"<<endl;}
    else  {cout<<"you failed"<<endl ;}
    return 0;

}
