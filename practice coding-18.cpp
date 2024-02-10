
//***
//**
//*
#include <iostream>
using namespace std;

int main() {
    int x,j,i;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(i=x;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"O";
        }
        cout<<"\n";
    }
    return 0;
}
