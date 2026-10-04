#include <iostream>
using namespace std;
int main()
int choice;
cout<< "1 pizza 2 burger 3 pasta 4 exit\n"
cin >> choice;
switch(choice)
{
    case 1 : cout<< "pizza"; break;
    case 2 : cout<< "burger"; break;
    case 3 : cout<< "pasta"; break;
    case 4 : cout<< "exit"; break;
    default : cout<< "invalid"; break;

}
