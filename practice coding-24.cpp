//215638
//126583

#include <iostream>
using namespace std;

int main() {
    int i,n,a[100],l,s;
    cout<<"how many numbers you want to enter?";
    cin>>n;
    cout<<"enter your numbers";
    for(i=0;i<n;i++){
        cin>>a[i];
        cout<<"\n";
    }
for(i=1;i<n;i=i+2){
    int b=a[i];
    a[i]=a[i-1];
    a[i-1]=b;
}
for(i=0;i<n;i++){
    cout<<a[i];
    cout<<"\t";
}
    return 0;
}