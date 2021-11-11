#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "enter num : \n";
    cin>>num;
    switch(num % 2)
    {
        case 1:
        cout<< " odd " << endl;
        break;
        case 0:
        cout <<" even " << endl;
        break;
        default :
         cout << "enter proper number";
    }
}