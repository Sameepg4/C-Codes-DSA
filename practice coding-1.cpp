#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    char I[10];
    float R,Q,A,D,Na;
    cout<<"enter the item name";
    cin>>I;
    cout<<"enter the rate";
    cin>>R;
    cout<<"enter the quantity";
    cin>>Q;
    A=R*Q;
    D=0.1*A;
    NA=A-D;

    cout<<" the item name is:"<<I;
    cout<<"Amount is:"<<A;
    cout<<"Net amount is"<<NA;
    getch();

return 0;
}