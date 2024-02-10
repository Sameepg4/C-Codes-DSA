//reverse of an array

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
for(i=0;i<n/2;i++){
    int b=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=b;
}
for(i=0;i<=n;i++){
    cout<<a[i];
    cout<<"\t";
}
    return 0;
}