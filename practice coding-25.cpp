//insert a number in the array

#include <iostream>
using namespace std;

int main() {
    int i,n,a[100],x,y;
    cout<<"how many numbers you want to enter?";
    cin>>n;
    cout<<"enter your numbers";
    for(i=1;i<=n;i++){
        cin>>a[i];
        cout<<"\n";
    }
cout<<"enter the number you want to insert :";
cin>>x;
cout<< "enter the position at which you want to insert the number :";
cin>>y;
for(i=n;i>=y;i--){
    a[i+1]=a[i];
    }    
a[y]=x;
for(i=1;i<=n+1;i++){
    cout<<a[i];
    cout<<"\t";
}
    return 0;
}