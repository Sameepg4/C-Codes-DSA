// x+[(x^2)/3!]+[(x^3)/4!]+..........
#include <iostream>
using namespace std;

int main() {
    int j,i;
    float a,x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the power till you want to check : ";
    cin>>a;
    float sum=0;
    while(a>0){
        if(a==1){
            int nu=x;
            cout<<nu;
        }
        else if (a>1){
            int nu=x;
            for (j=2;j<=a;j++){
            for (i=2;i<=j;i++){
                nu=nu*x;
            } int de=1;
            for(i=1; i<=(2*j)-1;i++){
                de=de*i;
            }
            sum=sum+(nu/de);
        }
        cout<<sum;
        }
    }
    cout<<sum;
    return 0;
}