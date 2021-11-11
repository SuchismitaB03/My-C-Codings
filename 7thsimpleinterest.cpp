#include <iostream>
using namespace std;
int main()
{
    float p, t, r, si;
    cout<<"Enter The Principal Amount: ";
    cin>>p;
    cout<<"Enter The Rate Of Interest: ";
    cin>>r;
    cout<<"Enter The Time Period: ";
    cin>>t;
    si= ( p * t * r ) / 100;
    cout<<"simple interest = " << si;
    
}