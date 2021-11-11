#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< "enter the number : \n";
    cin >> num;

    switch(num)
    {
        case 1 :
        cout << " one \n" ;
        break;
        case 2 :
        cout << " two \n" ;
        break;
        case 3 :
        cout <<  " three \n" ;
        break;
        case 4 :
        cout << " four \n" ;
        break;
        case 5 :
        cout << " five \n " ;
        break;
        default :
        cout << "enter proper number : \n";
    }
}
